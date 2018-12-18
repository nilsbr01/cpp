#include "base.h"
#include "derived.h"
#include "message.h"

Base **derivedFactory(size_t size)
{
    Base **bases = new Base*[10];
    for (Base **begin = bases, **end = begin + size; begin != end; ++begin)
    {
        *begin = new Derived();
    }
    return bases;
}

int main()
{
	Base **bp = derivedFactory(10);

    for (size_t idx = 0; idx < 10; ++idx)
    {
        bp[idx]->hello(std::cout);
        delete bp[idx];
    }

    delete[] bp;
}