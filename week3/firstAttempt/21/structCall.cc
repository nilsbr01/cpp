#include "main.ih"

bool structCall(size_t argc, char **argv)
{
    ReturnValues returnValues;

    // look whether an argument is requested
    if(!(returnValues.ok = combine(argc, argv)))
        return false;
    
    returnValues.nr = stoul(argv[1]);       // requested argument
    
    // look whether requested arguement exists
    if(returnValues.nr > argc)  
    {
        cout << "Not enough arguements provided\n";
        return false;
    }

    // index starts counting from 0, user input counts from 1
    returnValues.value = argv[returnValues.nr - 1];

    cout << returnValues.nr << " " << returnValues.value << "\n";       // print requested argument
    return true;
}