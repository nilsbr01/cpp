#include "signal/signal.h"
#include "signaldemo/signaldemo.h"

int main()
{
    SignalDemo signalDemo;

    Signal::getInstance()->add(SIGINT, signalDemo);
    Signal::getInstance()->add(SIGTERM, signalDemo);

    signalDemo.run();
}