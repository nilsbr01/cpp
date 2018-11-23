#include "main.ih"

int main(int argc, char **argv)
{
    // define two or more integers
    int val1 = 10, val2 = 20, val3 = 30, val4 = 40;       
    // define two or more doubles
    double doub1 = 10.5, doub2 = 20.4, doub3 = 23.4;;      

    // call integer sum using sum1.cc
    cout << sum({ val1, val2, val3, val4 }) << "\n";        
    // call double sum using sum2.cc
    cout << sum({ doub1, doub2, doub3 }) << "\n";      
}
