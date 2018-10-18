#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

class CharCount
{
    enum Action
    {
        APPEND,
        INSERT,
        ADD
    };

    public:
        struct Char
        {
            char ch;
            size_t count;
        };
    
        struct CharInfo
        {
            Char *ptr;
            size_t nChar;
        };
    
    private:
        CharInfo d_info = { 0, 0 };

    public:
        size_t count(std::istream &in);
        CharInfo const &info() const;

    private:
        void process(char ch);

        Action locate(size_t *idx, char ch);
        void add(char ch, size_t idx);
        void insert(char ch, size_t idx);
        void append(char ch);            // in fact:insert at d_nfo.nChar

        void transfer(Char *dest, size_t begin, size_t end);
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}
        
#endif