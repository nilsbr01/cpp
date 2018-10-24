#include "cpu.ih"

void CPU::store(Operand const &lhs, int value)
{
    (this->*(storeActions[static_cast<int>(lhs.type) - 1]))(lhs, value);
}