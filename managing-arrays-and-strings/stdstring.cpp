/* Demonstrates the use of std::string to initialize, storestore user input, 
copy, concatenate, and dertermin  the length of a string */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Displaying the string a string that has been initialized
    string greetString ("Hello std::string!");
    cout << greetString << endl;
   
    // std::string is stored in the variables firstLine and secondLine
    cout << "Enter a line of text: " << endl;
    string firstLine;
    getline(cin, firstLine);

    cout << "Enter another: " << endl;
    string secondLine;
    getline(cin, secondLine);
    
    // On this line is where the str concatenation take place
    cout << "Result of concatenation: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString <<  endl;

    // Here we make a copy by simply assigning line 26
    cout << "Copy of concatenated sting: " << endl; 
    string aCopy;
    aCopy  = concatString;
    cout << aCopy << endl;
    
    // Finally we dertermine the length by invoking the length() function 
    cout << "Length of a concat string: " << concatString.length() << endl;

    return 0;
}
