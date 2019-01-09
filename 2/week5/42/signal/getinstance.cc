#include "signal.ih"

Signal *Signal::s_signal;

Signal *Signal::getInstance()
{
    if (!s_signal)
        s_signal = new Signal();

    return s_signal;
}