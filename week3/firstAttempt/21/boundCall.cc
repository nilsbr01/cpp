#include "main.ih"

bool boundCall(size_t argc, char **argv)
{
    // look whether an argument is requested
    if(!combine(argc, argv))
        return false;
    
    size_t nr = stoul(argv[1]);     // requested arguement
    
    // look whether requested arguement exists
    if(nr > argc)
    {
        cout << "Not enough arguements provided\n";
        return false;
    }
    
    // index starts counting from 0, user input counts from 1
    string value = argv[nr - 1];        

    cout << nr << " " << value << "\n";     // print requested argument
    return true;
}