#ifndef MSGCLASS_H_
#define MSGCLASS_H_

class MsgClass
{
    protected:
        enum class Msg
        {
            NONE = 0,
            DEBUG   = 1 << 0,
            INFO    = 1 << 1,
            NOTICE  = 1 << 2,
            WARNING = 1 << 3,
            ERR     = 1 << 4,
            CRIT    = 1 << 5,
            ALERT   = 1 << 6,
            EMERG   = 1 << 7,
            ALL     = (1 << 8) - 1
        };
};

#endif