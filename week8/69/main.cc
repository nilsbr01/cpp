#include "main.ih"

int main()
{
  // if move constructor is not printed we know that there is copy elission  
  Demo example1(factory()); 

  Demo example2;
  example2 = example1;    // Copy assignment

  Demo example3;
  example3 = factory();    // Move assignment
}

