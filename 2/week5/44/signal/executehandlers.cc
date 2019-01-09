#include "signal.h"

void Signal::executeHandlers(int signum)
{
    for (auto &handler : s_signal->d_handlers[signum])
        handler->handle(signum);
}