#ifndef SIGNALDEMO_H_
#define SIGNALDEMO_H_

#include "../signal/signal.h"

class SignalDemo : public Signal::Handler
{
    volatile bool d_running;
    pid_t d_pid;

    public:
        SignalDemo();
        void run();

    private:
        void handle(size_t signum) override;

};

#endif