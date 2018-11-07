#include "lock.ih"
#include <unistd.h>

bool Lock::valid()
{
    //return false if acces returns -1, true if access returns 0
    return (access(d_path.c_str(), F_OK) ? false : true);
}