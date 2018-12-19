#ifndef MULTI_H_
#define MULTI_H_

#include "deriv1.h"
#include "deriv2.h"

class Multi: public Deriv1, public Deriv2
{
    public:
        Multi(int value);
};

#endif