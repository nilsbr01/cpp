#include "cpu.ih"

int CPU::dereference(Operand const &value)
{
    return (this->*(dereferenceActions[static_cast<int>(value.type)]))(value);
}