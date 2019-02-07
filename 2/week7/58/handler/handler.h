#ifndef HANDLER_H_
#define HANDLER_H_

#include <string>
#include <iostream>

class Handler
{
    public:
        void shift(std::ostream &out, std::string const &text);
};

#endif