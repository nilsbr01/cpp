#include "main.ih"

extern char **environ;

int main(int argc, char **argv)
{
    // determine size of array of env variables
    size_t size = sizeArray(environ);

    string stringEnv[size]; // new string array
    
    // paste ntbs as string into new string array
    for (size_t index = 0; index < size; ++index)
        stringEnv[index] = environ[index];

    // sort the string array
    // size - 1 because that is the last index of the array
    quickSort (stringEnv, 0, size - 1); 
    
    // print string array
    for (size_t index = 0; index < size; ++index)
        cout << stringEnv[index] << '\n';
}