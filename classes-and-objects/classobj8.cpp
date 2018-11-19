/* Demonstrates the use of an object when deconstructed, delete[] deallocates the memory, thereby invalidating the
 * pointer copy held by the other object. Such copies are shallow and are a threat to the stability of the program. This
 * program will show the problem in passing objects if a Class such as MyString by Value. */

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
    char* buffer;

public:
    MyString(const char* initString) // Constructor
    {
        buffer = NULL;
        if(initString != NULL)
        {
            buffer = new char [strlen(initString) + 1];
            strcpy(buffer, initString);
        }
    }

    ~MyString() // Destructor 
    {
        cout << "Invoking destructor, clearing up" << endl;
        delete [] buffer;
    }

    int GetLength()
    { return strlen(buffer); }

    const char* GetString()
    { return buffer; }
};

void UseMyString(MyString str) 
{
    cout << "String buffer in MyString is " << str.GetLength();
    cout << " characters long" << endl;

    cout << "buffer contains: contains: " << str.GetString() << endl; 
    return;
}

int main()
{
    MyString sayHello("Hello from String Class");
    UseMyString(sayHello);

    return 0;
}

