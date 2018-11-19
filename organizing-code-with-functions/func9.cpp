/* Demonstrates the use of returning values by reference to compute the are of a circle. */
#include <iostream>
using namespace std;

const double Pi = 3.1416;

// Output parameter result by reference 
void Area(double radius, double& result)
{
    result = Pi * radius * radius ;
}

int main ()
{
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
   
   // This is where the function Area() is invoked with two parameters;
    // the second is one that should contain the result. The second 
    // Parameter of Area() is passed by reference and point to the same memory 
    // location as the double areaFetched declaredin line 22
    double areaFetched = 0;
    Area(radius, areaFetched);

    cout << "The area is: "<< areaFetched << endl;
    return 0;
}
