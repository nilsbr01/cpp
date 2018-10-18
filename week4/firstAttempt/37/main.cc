#include "main.ih"

int main(int argc, char **argv)
{
    // make instances of memory and cpu
    Memory memory; 
    CPU cpu(memory);

    // run cpu
    cpu.run();
}

