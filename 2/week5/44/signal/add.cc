#include "signal.ih"

void Signal::add(size_t signum, Handler &object)
{
    if (d_handlers.size() <= signum)
        d_handlers.resize(signum + 1);

    d_handlers[signum].push_back(&object);

    signal(signum, executeHandlers);
}
