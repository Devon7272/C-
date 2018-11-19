/* Demonstrates the use of inheritance but this time using the protected specifier making it accessible to classes that
 * derive(and friends), yet simultaneously making it inaccessible to everyone else outside the class including main() */
#include <iostream>

class Fish
{
protected:
    bool isFreshWaterFish; //accessible only to derived classes

public:
    void Swim()
    {
        if(isFreshWaterFish)
            std::cout << "Swims in lake" << std::endl;
        else
            std::cout << "Swims in sea" << std::endl;
    }
};

class Tuna: public Fish
{
public:
    Tuna()
    {
        isFreshWaterFish = false; //set protected member in base
    }
};

class Carp: public Fish
{
public:
    Carp()
    {
        isFreshWaterFish = false;
    }
};

int main()
{
    Carp myLunch;
    Tuna myDinner;

    std::cout << "About my food" << std::endl;

    std::cout << "Lunch: ";
    myLunch.Swim();

    std::cout << "Dinner: ";
    myDinner.Swim();

    // uncomment line below to see that protected members
    // are not accessible from outside the class hierarchy

    //myLunch.isFreshWaterFish = false;

    return 0;
}