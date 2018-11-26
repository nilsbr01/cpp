#include "main.ih"

#include <typeinfo>
    
int main()
{
    show(Msg::CRIT);
    show(Msg::NONE | Msg::EMERG);
    show(Msg::ALERT | Msg::CRIT);
    show(Msg::ALL   & (Msg::ERR | Msg::WARNING));
    show(~Msg::NOTICE);
    show(Msg::ALL);
}