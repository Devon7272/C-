/* Demonstrates the use of the keyword (explicit) to block unintentional implicit conversions. */

#include <iostream>
using namespace std;

class Human
{
    int age;
public:
    // explicit conctructor blocks implicit conversations 
    explicit Human(int humansAge) : age(humansAge) {}
};

void DoSomething(Human person)
{
    cout << "Human sent did something" << endl;
    return;
}

int main()
{
    Human kid(10);  //explicit conversion OK
    Human anotherKid = Human(11); //explicit, OK
    DoSomething(kid); // OK

    // Human anotherKid2 = 11; // failure: implicit conversion not OK

    //DoSomething(10); // implicit conversion

    return 0;
}
