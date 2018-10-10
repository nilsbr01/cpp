#include "main.ih"

int main(int argc, char *argv[])
{
    // print all strings in argv, by index untill argc
    for (int index = 0; index < argc; ++index)
        cout << argv[argc] <<'\n';

    size_t index = 0;

    // print all environment variables until null is found in array
    while(environ[index] != 0)
    {
        cout << environ[index] << '\n';
        ++index;
    }  
}