#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    size_t input = stoul(argv[1]);              // get input from argument

    for(size_t count = 1; count <= 10; ++count) // for loop which runs 10x
        // print multiplication     
        cout << input << " x " << count << " = " << 
        input * count << '\n';      
}