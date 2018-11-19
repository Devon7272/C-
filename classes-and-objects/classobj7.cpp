/* A simple class that encapsulates a character buffer to ensure deallocation via the destructor. A destructor cannot be
 * overloaded. A class can have only one destructor. If you forget to implement a destructor,  the compiler creates and
 * invokes a dummy destructor, that is, an empty one (that does no cleanup of dynamically allocated memory).*/

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
    char* buffer;

public:
    MyString(const char* initString) // constructor
    {
        if(initString != NULL)
        {
            buffer = new char [strlen(initString) + 1];
            strcpy(buffer, initString);
        }
        else
            buffer = NULL;
    }

    ~MyString()
    {
        cout << "Invoking destructor, before clearing up" << endl; 
        if (buffer != NULL)
            delete [] buffer;
    }

    int GetLength()
    {
        return strlen(buffer);
    }

    const char* GetString()
    {
        return buffer;
    }
};

int main()
{
    MyString sayHello("Hello from String Class");
    cout << "String buffer in sayHello is " << sayHello.GetLength();
    cout << " characters long" << endl;

    cout << "Buffer contains: " << sayHello.GetString() << endl;
}
