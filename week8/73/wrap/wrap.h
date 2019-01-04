#ifndef INCLUDED_WRAP_
#define INCLUDED_WRAP_


class Wrap
{
    union Data 
    {
        Strings u_words;
        std::string u_word;
        double u_value;
    };
    public:
        Wrap();

    private:
};
        
#endif
