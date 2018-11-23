#include "main.ih"

extern char **environ;

int main(int argc, char **argv)
try
{
    // determine size of array of env variables
    int size = 0;
    while (environ[size] != nullptr) 
        ++size;

    string *stringEnv = new string[size]; // new string array
    
    // paste ntbs as string into new string array
    for (int index = 0; index < size; ++index)
        stringEnv[index] = string(environ[index]);

    quickSort (stringEnv, 0, size - 1); // sort the string array

    // print string array
    for (int i = 0; i < size; ++i)
        cout << stringEnv[i] << "\n";

}
catch (...)
{
    return 1;
}
