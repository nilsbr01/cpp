#include "signal.ih"

void Signal::ignore(size_t signum)
{
    if (d_handlers.size() <= signum)
        throw "no handlers with this signum exist!";

    // ignore this signal
    signal(signum, SIG_IGN);

    // remove all handlers for this signum
    d_handlers[signum].clear();
}