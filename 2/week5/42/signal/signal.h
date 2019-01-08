#ifndef SIGNAL_H_
#define SIGNAL_H_

#include <vector>
#include <csignal>

class Signal
{
    class Handler;
    std::vector<std::vector<Handler *>> d_handlers;
    
    public:
        void add(size_t signum, Handler &object);
        void remove(size_t signum, Handler &object);
        void ignore(size_t signum);
        void reset(size_t signum);

    
    private:
        void signal(int signum, sighandler_t handler);

};

class Signal::Handler
{
    friend class Signal;

    public:
        virtual ~Handler();
    private:
        virtual void handle(size_t signum) = 0;
};

#endif