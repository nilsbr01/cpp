#include "multi.ih"

Multi::Multi(int value)
:
    Basic(value)
{
    // WAY 1
    // Goes via left path in hierarchy.txt
    // cout << static_cast<Basic *>(static_cast<Deriv1 *>(this)) << '\n';
    
    // WAY 2
    // Goes via right path in hierarchy.txt
    // cout << static_cast<Basic *>(static_cast<Deriv2 *>(this)) << '\n';

    // Solution: change Deriv1 and Deriv2 to inherit "virtual public Base"
    // instead of public Base

    // Add int value to Multi constructor, and explicitly call the right Base
    // constructor in the Multi constructor (this file)
    cout << static_cast<Basic *>(this) << '\n';
};