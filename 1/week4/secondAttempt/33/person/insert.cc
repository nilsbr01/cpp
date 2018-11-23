#include "person.ih"

void Person::insert(std::ostream &outStream)
{
    outStream << d_name << '\n' << d_address << '\n' << d_phone << '\n';
}