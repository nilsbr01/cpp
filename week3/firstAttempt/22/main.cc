#include "main.ih"

int main(int argc, char **argv)
try
{
    char command = argv[1][1];      // read second character of user input
    string input;

    switch(command)     // determine case based on input of user
    {
        case 'c':
        {
            size_t characters = CountCharacters(input);
            cout << characters << "\n";
            break;
        }
        case 'w':
        {
            size_t words = CountWords(input);
            cout << words << "\n";
            break;
        }
        case 'l':
        {
            size_t lines = CountLines(input);
            cout << lines << "\n";
            break;
        }
        default:
            cout << "no valid command is provided \n";
    }
}
catch (...)
{
    return 1;
}
