#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "wrong use of program";
        return 0;
    }

    size_t number = stoul(argv[1]); // get number of people
    
    // get number to feed to srand(), 1 by default
    size_t chance = (argc > 2 ? stoul(argv[2]) : 1); 
    srand(chance);

    // make array of persons
    Person array[number];

    // insert persons and print
    makeList(array, number);
    printArray(array, number);
}

