#ifndef MYCOMPILER_H_
#define MYCOMPILER_H_

#include "fork/fork.h"
#include <cstddef>

class MyCompiler: private Fork
{
    char **d_files;
    size_t d_numFiles;

    char **compileCmd = { "g++", "--std=c++2a", "-c", "/dev/null", "-Wall", "-Werror", "-O2", NULL, NULL};
    const size_t numCompileOptions = 7;

    public:
        MyCompiler(char **files, size_t numFiles); // numFiles files in files

    private:
        void compile();

        void childProcess();
        void parentProcess();
};

#endif