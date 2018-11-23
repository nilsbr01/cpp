#include "main.ih"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        cout << "Write a number as an argument to run the program\n";
        return 0;
    }

    ostream out(0);
    out.rdbuf(cout.rdbuf());

    out.setstate(ios::failbit);

    size_t bound = stoul(argv[1]);
    for (size_t index = 0; index < bound; ++index)
        if (out.good())
            out << "Nr. of command line arguments " << argc << '\n';
}