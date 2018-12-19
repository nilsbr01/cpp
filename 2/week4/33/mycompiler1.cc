#include "mycompiler.ih"

MyCompiler::MyCompiler(char **files, size_t numFiles)
:
    d_files(files),
    d_numFiles(numFiles)
{}