#include "main.ih"

int main(int argc, char **argv)
{
    size_t size = 5;        // set the size of the array
    Person person[size];   // create an array of 'size' person objects
    
    // read all of the Persons' data from the standard input stream
    extract(person, size);
    
    // Write the data of all the Persons' data to the standard output stream
    insert(person, size);
}
