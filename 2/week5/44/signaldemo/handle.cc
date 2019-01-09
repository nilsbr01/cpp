#include "signaldemo.ih"

void SignalDemo::handle(size_t signum)
{
    if (signum == SIGINT)
        cout << "Received SIGINT" << '\n';

    if (signum == SIGTERM)
    {
        cout << "Received SIGTERM, stopping" << '\n';
        d_running = false;
    }
}