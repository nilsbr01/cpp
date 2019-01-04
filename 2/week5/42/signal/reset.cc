#include "signal.ih"

void Signal::reset(size_t signum)
{
    if (d_handlers.size() <= signum)
        throw "no handlers with this signum exist!";

    // restore default behaviour
    signal(signum, SIG_DFL);

    // remove all handlers for this signum
    d_handlers[signum].clear();
}