#include <iostream>

using namespace std;


union fields {              // make a union fields 
    size_t all : 40;        // declare all bitfields of union in the following lines
    size_t a : 1;
    size_t b : 3;
    size_t c : 4;
    size_t d : 5;
    size_t e : 4;
    size_t f : 4;
    size_t g : 4;
    size_t h : 4;
    size_t i : 4;
    size_t j : 5;
    size_t k : 2;
};

int main(int argc, char const *argv[])
{
    fields bits;            //defina a variable bits of type fields
    bits.a = 0;             // set all fields of the union in the following lines
    bits.b = 7;
    bits.c = 15;
    bits.d = 10;
    bits.e = 6;
    bits.f = 7;
    bits.g = 15;
    bits.h = 15;
    bits.i = 7;
    bits.j = 0;
    bits.k = 3;
    
    cout << hex << bits.all << '\n';        // print whole union as hexadecimal number
}

