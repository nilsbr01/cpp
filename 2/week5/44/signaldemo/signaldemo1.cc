#include "signaldemo.ih"

SignalDemo::SignalDemo()
:
    d_running(true),
    d_pid(getpid())
{}