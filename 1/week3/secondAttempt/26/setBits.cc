#include "main.ih"

size_t setBits(string input) 
{
    enum value 
        {
            b = 11,
            s = 28,
            e = 14,
        };
    
    enum constants 
        {
            bit_b = 0,
            bit_s = 1,
            bit_e = 2,
        };

    size_t count = 0;
    size_t index = 0;

    while(getline(cin, input, ','))
    {
        size_t newVar = stoul(input, 0, 36);
        
        if(count == 4)
        {
            count = 0;
            index = index + 1;
        }

        switch(newVar)
        {
            case b:
                bits[index] << 2;
                bits[index] & bit_b;
                break;
            case s:
                bits[index] << 2;
                bits[index] & bit_s;
                break;
            case e:
                bits[index] << 2;
                bits[index] & bit_e;
                break;
            default:
                break;
        }
        
        count = count + 1;
    }
    return 0;
}
