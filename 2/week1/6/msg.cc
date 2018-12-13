#include "main.ih"

char const *msgNames[] = 
{
    "Msg::NONE",
    "Msg::DEBUG",
    "Msg::INFO",
    "Msg::NOTICE",
    "Msg::WARNING",
    "Msg::ERR",
    "Msg::CRIT",
    "Msg::ALERT",
    "Msg::EMERG",
    "Msg::ALL"
};

void show(Msg msg)
{
    if (msg == 0)
    {
        std::cout << "NONE";
        return;
    }

    for (size_t idx = 0; idx < 8; idx++)
        if (msg & 1 << idx)
            std::cout << msgNames[idx + 1] << ' ';

    std::cout << '\n';
}