#ifndef FORK_H_
#define FORK_H_

class Fork
{
    int d_pid;

    public:
        virtual ~Fork();
        void fork();

    protected:
        int pid() const;
        int waitForChild() const;           // returns the status

    private:
        void parentRedirections();
        void childRedirections();

        virtual void childProcess() = 0;    // pure virtual members
        virtual void parentProcess() = 0;
};

#include "pid.f"

#endif