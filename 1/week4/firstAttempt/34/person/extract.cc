#include "person.ih"

void Person::extract(std::istream &inStream)
{
    std::string value;

    getline(inStream, d_name, ',');
    getline(inStream, d_address, ',');
    getline(inStream, d_phone);   
}