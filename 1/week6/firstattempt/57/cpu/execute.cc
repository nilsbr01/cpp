#include "cpu.ih"

bool CPU::execute(Opcode opcode)
{
    if (opcode == Opcode::STOP)
        return false;

    (this->*(executeActions[static_cast<int>(opcode)]))();
    return true;
}