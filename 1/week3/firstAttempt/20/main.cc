#include "main.ih"


int main(int argc, char **argv){
    
    try
    {
        int val1 = 10, val2 = 20;       // define two integers
        double doub1 = 10.5, doub2 = 20.4;      // define two doubles

        cout << sum(val1, val2) << "\n";        // call integer sum
        cout << sum(doub1, doub2) << "\n";      // call double sum

    }
    catch (...)
    {
        return 1;
    }

}
