#include "main.ih"

int main(int argc, char **argv)
{
    int square[10][10] = {0};
    int (*row)[10] = square;
    invIdentity(row);
}
