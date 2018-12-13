#ifndef MSG_H
#define MSG_H

#include <cstddef> // for size_t

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

void show(Msg msg);

inline Msg operator|(const Msg &lhs, const Msg &rhs)
{
    return static_cast<Msg>(static_cast<size_t>(lhs) | static_cast<size_t>(rhs));
}

inline Msg operator&(const Msg &lhs, const Msg &rhs)
{
    return static_cast<Msg>(static_cast<size_t>(lhs) & static_cast<size_t>(rhs));
}

inline Msg operator~(Msg const &rhs)
{
    char c = static_cast<char>(rhs); // char to avoid 1 bits past bit 7
    c = ~c;
    return static_cast<Msg>(c);
}

inline size_t operator&(const Msg &lhs, const int rhs)
{
    return static_cast<size_t>(lhs) & rhs;
}

inline size_t operator|(const Msg &lhs, const int rhs)
{
    return static_cast<size_t>(lhs) | rhs;
}

inline bool operator==(const Msg &lhs, const int rhs)
{
    return static_cast<int>(lhs) == rhs;
}

#endif