#include "string.ih"

String::~String()
{
    delete[] d_str;
}