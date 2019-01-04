#ifndef SIGNAL_H_
#define SIGNAL_H_

#include <vector>
#include <csignal>

class Signal
{
    public:
        class Handler;

        Signal();
        ~Signal();

        void add(size_t signum, Handler &object);
        void remove(size_t signum, Handler &object);
        void ignore(size_t signum);
        void reset(size_t signum);

    
    private:
        std::vector<std::vector<Handler *>> d_handlers;
        void signal(int signum, sighandler_t handler);

};



#endif