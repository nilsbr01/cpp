#ifndef INCLUDED_STRING_
#define INCLUDED_STRING_
#include <istream>
#include <string>


class String
{
    size_t d_size; // number of strings that are stored in object
    std::string *d_str; // used to store lines of string or char *

    public:
        String();
        String(int argc, char **argv);
        String(char **environ);
        String(std::istream &in);

    private:
        void add(char *str);
        void add(string str);
        size_t size();
};
        
#endif
