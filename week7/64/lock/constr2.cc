#include "lock.ih"
#include <libgen.h>
#include <string.h>

Lock::Lock(string const &path, string lockDir)
{
    char *cPath = new char[path.length()];
    strcpy(cPath, path.c_str());

    d_path = basename(cPath);
    d_lockDir = lockDir + '/' + d_path + ".lck";

    size_t file;
    //return false if acces returns -1, true if access returns 0
    if (access(d_path.c_str(), F_OK) == 0)
        file = open
}