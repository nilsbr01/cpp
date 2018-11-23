#include "lock.ih"
#include <libgen.h>
#include <string.h>

Lock::Lock(string const &path)
{ 
    char *cPath = new char[path.length()];
    strcpy(cPath, path.c_str());

    string dir = dirname(cPath);
    
    cout << dir << '\n';
    Lock(path, dir);
}