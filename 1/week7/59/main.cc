#include <fstream>
using namespace std;

void hello(ostream &out)
{
    out << "hello world\n";
}

int main()
{
    ofstream out1{ "tmp/out1" };
    hello(out1);

    fstream out2;
    out2.open("tmp/out2");
    if (!out2)
        out2.open("tmp/out2", ios::out | ios::in | ios::trunc);                

    hello(out2);
}