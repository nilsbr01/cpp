#ifndef INCLUDED_ENUMS_
#define INCLUDED_ENUMS_

enum RAM
{
    SIZE = 20
};

    // all opcodes recognized by the CPU. They must also be known by the
    // tokenizer, which is why they are `escalated' to a separate header file.
enum class Opcode
{
    ERR = 0,
    MOV = 1,
    ADD = 2,
    SUB = 3,
    MUL = 4,
    DIV = 5,
    NEG = 6,
    DSP = 7,
    STOP,
};

    // the various operand types
enum class OperandType
{
    SYNTAX,             // syntax error while specifying an operand
    VALUE = 0,          // direct value
    REGISTER = 1,       // register index
    MEMORY = 2          // memory location (= index)
};


#endif