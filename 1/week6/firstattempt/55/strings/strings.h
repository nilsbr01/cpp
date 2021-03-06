#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    std::string *d_str;
    size_t d_capacity;

    public:
        struct POD
        {
            size_t      size;
            std::string *str;
            size_t      capacity;
        };

        Strings();
        Strings(int argc, char *argv[]);
        Strings(char *environLike[]);
        Strings(std::istream &in);
        ~Strings();

        void swap(Strings &other);              

        size_t size() const;
        std::string *data() const;
        POD release();

        std::string const &at(size_t idx) const;    // for const-objects
        std::string &at(size_t idx);                // for non-const objects

        void add(std::string const &next);          // add another element

        void reserve(size_t capacity);                  // reserve elements
        void resize(size_t size);                   // resize to size
        size_t capacity() const;

    private:
        void fill(char *ntbs[]);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string *enlarge(size_t capacity);
        void destroy();                 

        static size_t count(char *environLike[]);   // # elements in env.like

}; 

inline size_t Strings::size() const         
{                                          
    return d_size;
}

inline std::string *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}

inline size_t Strings::capacity() const
{
    return d_capacity;
}
        
#endif