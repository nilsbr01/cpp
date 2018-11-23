#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include "../enums.h"
class Tokenizer
{
    public:
        Tokenizer();
        Opcode opcode();
        OperandType token();
        int value();
        void reset();

    private:
};
        
#endif
