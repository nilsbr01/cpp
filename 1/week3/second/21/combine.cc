#include "main.ih"

ReturnValues combine(size_t argc, char **argv)
{
    ReturnValues name;
    name.nr = stoul(argv[1]); // argument requested by user
    
    // look whether requested arguement exists
    name.ok = (name.nr <= argc ? true : false);
    
    // index starts counting from 0, user input counts from 1
    name.value = argv[name.nr - 1];

    return name;
}
