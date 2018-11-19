/* Demonstrates the use of C-style strings and user input  that can compromise the stability
of the the application and */

#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    cout << "Enter a word NOT longer than 20 characters:" << endl;

    char userInput [21] = {'\0'};
    cin >> userInput;

    cout << "Length of your input was: " << strlen (userInput) << endl;

    return 0;
}


//Don't Use This Program!!!!!!!!!!!!!!!!!!!!!!!!
