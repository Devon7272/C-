/* Demonstrates the use consexpr with classes and objects. consexpr offeers a powerful way to improve the performance of
 * C++ applications. By marking functions that operate on constants or const-expressions as constexpr, the compiler is
 * being instructed to evaluate functions and insert their result instead of inserting instructions that computer the
 * result when an appplication is executed. */

#include <iostream>
using namespace std;

class Human
{
    int age;
public:
    constexpr Human(int humansAge) :age(humansAge) {}
    constexpr int GetAge() const { return age; }
};

int main()
{
    constexpr Human somePerson(15);
    const int hisAge = somePerson.GetAge();

    Human anotherPerson(45); // not constant expression

    return 0;
}
