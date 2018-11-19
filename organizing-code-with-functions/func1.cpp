/* Demonstrates the use of functions by computing the Area and circumfrence of a circle. */
#include <iostream>
using namespace std;

const double Pi = 3.14159265;

//Function Declarations (prototypes)
double Area(double radius);
double Circumference(double radius);

int main()
{
    cout << "Enter raidus: ";
    double raidus = 0;
    cin >> raidus;

    //Call function "Area"
    cout << "Area is: " << Area(raidus) << endl;

    //Call function "Circumference"
    cout << "Circumference is: " << Circumference(raidus) << endl;

    return 0;
}

// Function definitions (implmentations)
double Area(double radius)
{
    return Pi * radius *  radius;
}

double Circumference(double radius)
{
    return 2 * Pi * radius;
}
