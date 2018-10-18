#include "main.ih"

int main(int argc, char **argv)
{
    if (argc < 2)    // test whether there are arguements provided
    {
        cout << "there are no arguments provided \n";
        return 0;
    }
        
    structCall(argc, argv);
    boundCall(argc, argv);   
}

