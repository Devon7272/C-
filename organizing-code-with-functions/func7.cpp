/* Demonstrates the use of overloading a function to calculate the area of a circle or a cylinder */
#include <iostream>
using namespace std;

const double Pi = 3.14159265;
//Here we are declaring the the prototype for the overloaded forms of Area()
//The first overloaded variant accepts a single parameter--radius of a circle
//The next one accepts two parameters -- radius and height of a cylinder
//These funstions are classified as overloaded because there are two
//prototypes with the same name.
double Area(double radius); // for circle
double Area(double radius, double height); // for cylinder

int main()
{
    cout << "Enter z for Cylinder, c for circle: ";
    char userSelection = 'z';
    cin >> userSelection;

    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;

    if (userSelection == 'z')
    {
        cout << "Enter height: ";
        double height = 0;
        cin >> height;

        //Invoke overloaded variant of Area for Cylinder
        cout << "Area of cylinder is: " << Area (radius, height) << endl;
    }
    else
        cout << "Area of cylinder is: " << Area (radius) << endl;
    
    return 0;
}

// for circle 
double Area(double radius)
{
    return Pi * radius * radius;
}

//Overloaded for cylinder 
double Area(double radius, double height)
{
    // reuse the area of the circle
    return 2 * Area (radius) + 2 * Pi * radius * height;
}
