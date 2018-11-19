/* This program will demonstrate a class that does not permit copying we are going to model the the constiution of our
 * country. Our constiution permits only one president so (class President). This problem is that we need to create this
 * program with the intention of creating only one president i.e a single instance also known as a singleton. The
 * Singleton method prevents the creation of miltiple presidents via instantiation of multiple objects. What we want
 * here is a class President that has one, and only one , real-world manifestation- that is, there is only one object
 * and creation of additional one is prohibited. This is the concept of singleton that uses private constructors, a
 * private assignment operator, and a static instance member to create this(controversially) powerful pattern. The key
 * word static is an essential ingredient in creating a singleton class. Singleton class President That prohibits
 * copying, Assigment, and multiple instance creation. */

#include <iostream>
#include <string>
using namespace std;

class President
{
private:
    President() {}; //private default constructor
    President(const President&); // private copy constructor
    const President& operator=(const President&); // Assigment operator

    string name;

public:
    static President& GetInstance()
    {
        // Static objects are constructed only once 
        static President onlyInstance;
        return onlyInstance;
    }

    string GetName()
    { return name; }

    void SetName(string InputName)
    { name = InputName; }
};

int main()
{
    President& onlyPresident  = President::GetInstance();
    onlyPresident.SetName("Barack Obama");

    // uncommnet lines to see how compile failures prohibit duplicates
    // President second; // cannot access constructor
    // President* third= new President(); // cannot access constructor 
    // President fourth =  onlyPresident; // cannot acces copy constructor
    // onlyPresident = President::GetInstance(); //cannot access operator=

    cout << "The name of the President is: ";
    cout << President::GetInstance().GetName() << endl;

    return 0;
}
