#include "cpu/cpu.h"
#include "tokenizer/tokenizer.h"

int main()
{
    Memory memory;
    CPU cpu(memory);

    cpu.run();
}