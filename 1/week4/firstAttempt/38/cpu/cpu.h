#ifndef INCLUDED_CPU_
#define INCLUDED_CPU_

#include "../enums.h"
#include "../memory/memory.h"
#include "../tokenizer/tokenizer.h"

enum Registers
{
    NREGISTERS = 5
};

struct Operand
{
    OperandType type;
    int value;
};

class CPU
{
    int d_registers[NREGISTERS];
    Memory *d_memory;
    Tokenizer d_tokenizer;

    public:
        CPU(Memory &memory);
        void run();  

    private:
        bool error();
        bool assignTask(Opcode code);
        void execErr();
        void execMov();
        void execAdd();
        void execSub();
        void execMul();
        void execDiv();
        void execNeg();
        void execDSP();
};
        
#endif
