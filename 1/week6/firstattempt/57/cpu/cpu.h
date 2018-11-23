//+cpu
#ifndef INCLUDED_CPU_
#define INCLUDED_CPU_

#include "../tokenizer/tokenizer.h"     // the Tokenizer is a component of the
                                        // CPU.
#include "../memory/memory.h"
//class Memory;                           // Memory only needs to be a declared
                                        // term
class CPU
{
    enum 
    {
        NREGISTERS = 5,             // a..e at indices 0..4, respectively
        LAST_REGISTER = NREGISTERS - 1
    };

    struct Operand
    {
        OperandType type;
        int value;
    };
        
    Memory &d_memory;
    Tokenizer d_tokenizer;

    int d_register[NREGISTERS];

    public:
        CPU(Memory &memory);
        void run();

    private:
        bool error();           // show 'syntax error', and prepare for the 
                                // next input line
        void showError();

        bool execute(Opcode opcode);    // perform the action matching opcode

//+cpu
                                // return a value or a register's or 
                                // memory location's value
        int dereference(Operand const &value);
        int getRegister(Operand const &value);
        void setRegister(Operand const &operand, int value);
        int value(Operand const &value);
        int load(Operand const &value);
        void storeMemory(Operand const &operand, int value);

        bool rvalue(Operand &lhs);  // retrieve an rvalue operand
        bool lvalue(Operand &lhs);  // retrieve an lvalue operand

                                // determine 2 operands, lhs must be an lvalue
        bool operands(Operand &lhs, Operand &rhs);

        bool twoOperands(Operand &lhs, int &lhsValue, int &rhsValue);

                                // store a value in register or memory
        void store(Operand const &lhs, int value);
//+cpu2
        void mov();             // assign a value
        void add();             // add values
        void sub();             // subtract values
        void mul();             // multiply values
        void div();             // divide values (remainder: last reg.)
                                // div a b computes a /= b, last reg: %
        void neg();             // negate a value
        void dsp();             // display a value

    static constexpr int (CPU::*dereferenceActions[3]) (Operand const&)
    {
        &CPU::value,
        &CPU::getRegister,
        &CPU::load
    };

    static constexpr void (CPU::*storeActions[2]) (Operand const&, int)
    {
        &CPU::setRegister,
        &CPU::store
    };

    static constexpr void (CPU::*executeActions[8]) (){
        &CPU::showError,
        &CPU::mov,
        &CPU::add,
        &CPU::sub,
        &CPU::mul,
        &CPU::div,
        &CPU::neg,
        &CPU::dsp
    };
};

// prepend "get" because register is a keyword
inline int CPU::getRegister(Operand const &value)
{
    return d_register[value.value];
}

inline void CPU::setRegister(Operand const &operand, int value)
{
    d_register[operand.value] = value;
}

inline int CPU::value(Operand const &value)
{
    return value.value;
}

inline int CPU::load(Operand const &value)
{
    return d_memory.load(value.value);
}

inline void CPU::storeMemory(Operand const &operand, int value)
{
    d_memory.store(operand.value, value);
}

inline void CPU::showError()
{
    error();
}
        
#endif
//+cpu2