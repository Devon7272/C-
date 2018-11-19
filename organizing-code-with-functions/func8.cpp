/* Demonstrates the use of overloading functions that take an Array as a parameter. */
#include <iostream>
using namespace std;

// This first parameter tell the function that the data being input is an array, whereas
//the second parapmeter supplies the length such that you can use the array without 
//crossing its boundaries.
void DisplayArray(int numbers[], int length)
{
    for (int index = 0; index < length; ++index)
        cout << numbers[index] << " ";

    cout << endl;
}

void DisplayArray(char characters[], int length)
{
    for (int index = 0; index < length; ++index)
        cout << characters[index] << " ";
    cout << endl;
}

int main()
{   // lines 24 through 29 show two functions that are invoked using an array of integers and an array 
    //of characters as input. IN line 29 we include the null character, the is a best pratice and a good
    //habit to get into even though the array is not used as a string in a cout statment.
    int myNums[4] = {24, 58, -1, 245};
    DisplayArray(myNums, 4);

    char myStatment[7] = {'H', 'e' ,'l' ,'l' ,'o' ,'!' ,'\0'};
    DisplayArray(myStatment, 7);

    return 0;
}
