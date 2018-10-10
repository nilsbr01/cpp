#include "main.ih"

int main(int argc, char **argv)
{
    // read second character of user input
    char command = argv[1][1];      

    // determine case based on input of user
    switch (command)     
    {
        case 'c':
        {
            cout << countCharacters();
            break;
        }
        case 'w':
        {
            cout << countWords();
            break;
        }
        case 'l':
        {
            cout << countLines();
            break;
        }
        case 'e':
            return 0;
        default:
            cout << "no valid command is provided";
    }
    cout << '\n';
}
