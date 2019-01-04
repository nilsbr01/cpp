#ifndef SIGNAL_HANDLER_H_
#define SIGNAL_HANDLER_H_

class Signal::Handler
{
    friend class Signal;

    public:
        virtual ~Handler();
    private:
        virtual void handle(size_t signum) = 0;
};

#endif