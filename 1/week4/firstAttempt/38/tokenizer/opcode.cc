#include "tokenizer.ih"

Opcode Tokenizer::opcode()
{
    string code;

    cin >> code;

    switch (stoul(code, 0, 36))
    {
        case MOV:
            return MOV;
        case ADD:
            return ADD;
        case SUB:
            return SUB;
        case MUL:
            return MUL;
        case DIV:
            return DIV;
        case NEG:
            return NEG;
        case DSP:
            return DSP;
        default:
            return ERR;
    }
}