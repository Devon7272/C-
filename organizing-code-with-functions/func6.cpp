/* Demonstrates the use of a function with multiple return statments. */
#include <iostream>
using namespace std;

const double Pi = 3.14159265;

void QueryAndCalculate()
{
    cout << "Enter raidus: ";
    double radius = 0;
    cin >> radius;

    cout << "Area: " << Pi * radius * radius << endl;

    cout << "Do you wish to calculate circumfrence (y/n)? ";
    char calCircum = 'n';
    cin >> calCircum;

    if (calCircum == 'n')
       return;

    cout << "Circumference: " << 2 * Pi * radius << endl;
    return;
}

int main()
{
    QueryAndCalculate ();

    return 0;
}

