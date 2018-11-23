#include <iostream>
using namespace std;

union {
    size_t value : 40;
} val;

main(int argc, char *argv[])
{

    val.value = 0;
    val.value |= (7 << 1);
    val.value |= (15 << 4);
    val.value |= (10 << 8);
    val.value |= (6 << 13);
    val.value |= (7 << 17);
    val.value |= (15 << 21);
    val.value |= (15 << 25);
    val.value |= (7 << 29);
    val.value |= ((size_t) 0 << 33);
    val.value |= ((size_t) 3 << 38);

    cout << hex << val.value << '\n';
}
