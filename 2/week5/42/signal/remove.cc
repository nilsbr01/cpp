#include "signal.ih"

void Signal::remove(size_t signum, Handler &object)
{
    if (d_handlers.size() <= signum)
        throw "no handlers with this signum exist!";


    auto signalhandler = find(d_handlers[signum].begin(), d_handlers[signum].end(), &object);
    if (signalhandler == d_handlers[signum].end())
        throw "handler not found";

    d_handlers[signum].erase(signalhandler);
}