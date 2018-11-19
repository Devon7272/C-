/* demonstrates the use of arrays in c++ */

#include <iostream>

int main ( void )
{
    int myNumbers [5] = {34, 56, -23, 5002, 365};

   std::cout << "First element at index 0: " <<  myNumbers [0] << std::endl;
   std::cout << "Second element at index 1: " << myNumbers [1] << std::endl;
   std::cout << "Third element at index 2: " << myNumbers [2] << std::endl;
   std::cout << "Fourth element at index 3: " << myNumbers [3] << std::endl;
   std::cout << "Fith element at index 4: " << myNumbers [4] << std::endl;

    return 0;
}
