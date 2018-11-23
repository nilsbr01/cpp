#ifndef INCLUDED_LOCK_
#define INCLUDED_LOCK_

#include<string>

class Lock
{
    std::string d_path;
    std::string d_lockDir;
    
    public:
        Lock(std::string const &path);
        Lock(std::string const &path, std::string lockDir);
        ~Lock();

    private:
        size_t open();
        bool valid();
};
        
#endif
