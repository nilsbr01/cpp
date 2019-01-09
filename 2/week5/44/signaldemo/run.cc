#include "signaldemo.ih"

void SignalDemo::run()
{
    while (d_running)
    {
        cout << "Please send a SIGINT (2) or SIGTERM (15) signal to process " << d_pid << '\n';
        sleep(1);
    }
}