/* This program is intended to demonstrate the use of derived class overriding base class method by overriding method
 * swim() in the base class Fish. */

#include <iostream>

class Fish
{
private:
    bool isFresWaterFish;

public:
    // Fish constructor
    Fish(bool isFreshWaterFish) : isFresWaterFish(isFreshWaterFish){}

    void swim()
    {
        if(isFresWaterFish)
            std::cout << "Swims in lake: " << std::endl;
        else
            std::cout << "Swims in sea" << std::endl;
    }
};

class Tuna: public Fish
{
public:
    Tuna(): Fish(false){}

    void Swim()
    {
        std::cout << "Tuna swims real fast" << std::endl;
    }
};

class Carp: public Fish
{
public:
    Carp(): Fish(true){}

    void Swim()
    {
        std::cout << "Carp swims really slow" << std::endl;
    }
};

int main()
{
    Carp myLunch;
    Tuna myDinner;

    std::cout << "About my food" << std::endl;

    std::cout << "Lunch: " << std::endl;
    myLunch.Swim();

    std::cout << "Dinner: " << std::endl;
    myDinner.Swim();

    return 0;
}