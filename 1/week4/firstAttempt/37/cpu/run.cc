#include "cpu.ih"

void CPU::run()
{
    Opcode code;
    while (true)
    {
        // get next code from tokenizer
        code = d_tokenizer.getOpcode();
        
        // assign the task to right function. assignTaks returns false, stop
        if (!assignTask(code))
            break;
    }


}