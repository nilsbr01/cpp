#include "main.ih"

int main(int argc, char **argv)
try
{
    size_t number = stoul(argv[1]); // get number of people
    
    // get number to feed to srand(), 1 by default
    size_t chance = (argc > 2 ? stoul(argv[2]) : 1); 
    srand(chance);

    Person *head = makeList(number, nullptr); // make list of people

    while (head != nullptr) // print each person and go to next
    {
        cout << (head->color == brown ? "Brown" : "Blue") << 
        " (" << head->place << ")" << "\n";
        head = head->nextPerson;
    }
}
catch (...)
{
    return 1;
}
