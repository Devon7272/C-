/* Demonstrated the use of a defining a copy constructor to ensure deep copy of dynamically allocated buffers. A copy
 * construct takes an object of the same class by reference as a parameter. This parameter is an alias of the source
 * object and is the handle you have in writing your custom copy code. We use the copy constructor to ensure a deep copy
 * of all buffers in the source. The output here indicated that the memory address being pointed to by (buffer) is
 * different in the copy, this means that two objects dont point to the smae dynamically allocated memory address. As a
 * result when function UseMyString() returns and parameter str is destroyed, the destructor code does a delete[] on the
 * memory address that was allocated in the copy constructor and belongs to this object. In doing so this does not touch
 * memory that is being pointed to by SayHello in main(). In conclusion both functions and there objects are
 * respectfully destroyed successfully and peacfully without the application crashing. */

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
        buffer = NULL;
        cout << "Default constructor: creating new MyString" << endl;

        if(initString != NULL)
        {
            buffer = new char [strlen(initString) + 1];
            strcpy(buffer, initString);

            cout << "buffer points to: 0x" << hex;
            cout << (unsigned int*) buffer << endl;
        }
    }

    MyString(const MyString& copySource) // Copy constructor
    {
        buffer = NULL;
        cout << "Copy constructor: copying from Mystring" << endl;

        if(copySource.buffer != NULL)
        {
            // allocate own buffer 
            buffer = new char [strlen(copySource.buffer) + 1];

            // deep copy from the source into local buffer
            strcpy(buffer, copySource.buffer);

            cout << "buffer points to: 0x" << hex;
            cout << (unsigned int*)buffer << endl;
        }
    }

    // Destructor 
    ~MyString()
    {
        cout << " Invoking destructor, clearing up" << endl;
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
    cout << " character long" << endl;

    cout << "buffer contains: " << str.GetLength() << endl;
    return;
}

int main()
{
    MyString sayHello("Hello from String Class");
    UseMyString(sayHello);

    return 0;
}
