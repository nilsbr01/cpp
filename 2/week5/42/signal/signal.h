#ifndef SIGNAL_H_
#define SIGNAL_H_

#include <vector>
#include <csignal>

class Signal
{
    class Handler;

    std::vector<std::vector<Handler *>> d_handlers;
    static Signal *s_signal;
    
    public:
        static Signal *getInstance();
        Signal(Signal const &) = delete;
        Signal &operator=(Signal const &) = delete;

        void add(size_t signum, Handler &object);
        void remove(size_t signum, Handler &object);
        void ignore(size_t signum);
        void reset(size_t signum);


    private:
        Signal();

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