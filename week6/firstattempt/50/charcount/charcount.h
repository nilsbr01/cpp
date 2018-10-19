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
        size_t d_capacity = 20;
        CharInfo d_info = { new Char[d_capacity], 0 };

    public:
        size_t count(std::istream &in);
        size_t capacity() const;
        CharInfo const &info() const;

    private:
        void process(char ch);

        Action locate(size_t *idx, char ch);
        void add(char ch, size_t idx);
        void insert(char ch, size_t idx);
        void append(char ch);            // in fact:insert at d_nfo.nChar

        void enlarge();
        void transfer(Char *dest, size_t begin, size_t end);
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}

inline size_t CharCount::capacity() const
{
    return d_capacity;
}
        
#endif