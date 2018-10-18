#include "cpu.ih"

bool CPU::assignTask(Opcode code)
{
    switch (code)
    {
        case ERR:
            execErr();
            break;
        case MOV:
            execMov();
            break;
        case ADD:
            execAdd();
            break;
        case SUB:
            execSub();
            break;
        case MUL:
            execMul();
            break;
        case DIV:
            execDiv();
            break;
        case NEG:
            execNeg();
            break;
        case DSP:
            execDSP();
            break;
        case STOP:  // return false, so member run() can break
            return false;
        default: // no valid code, try again
            break;
    }
}