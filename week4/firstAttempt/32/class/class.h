#ifndef StringManip
#define Stringmanip

#include <string>

class StringManip
{   
    std::string d_source;       // the source file

    public:
        StringManip(std::string const &source);
    
        // return a copy of d_source in lower-case chars
        std::string lc() const;                

        // return a copy of d_source in upper-case chars
        std::string uc() const;                

        // comparison which returns -1: d_source first, 0: equal, 1: rhs first, case insensitive
        int compare(std::string rhs) const;

        // return a copy of d_source
        std::string copy() const ;           
};
        
#endif
