#include "handler.ih"

void Handler::shift(std::ostream &out, string const &text)
{
    string temp = text;
    out << temp << '\n';
    for (size_t idx = 0; idx < temp.length() - 1; ++idx)
    {
        rotate(temp.begin(), temp.begin() + 1, temp.end());
        out << temp << '\n';
    }
}