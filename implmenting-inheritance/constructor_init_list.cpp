/* This program can very useful with class fish, by supplyin a boolean input parameter to the constructor of Fish that
 * initializes Fish::isFreshWaterFish, this base class Fish can ensure the every derived class is forced to mention
 * whether the fish is a fresh water on or a saltwater one. */

#include <iostream>

class Fish
{
protected:
    bool isFreshWaterFish; // accessible only to derived classes

public:
    //Fish Constructor
    Fish(bool isFreshWater) :isFreshWaterFish(isFreshWater){}

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
    Tuna(): Fish(false){} //constructor initializes base
};

class Carp: public Fish
{
public:
    Carp(): Fish(true){}
};

int main()
{
    Carp myLunch;
    Tuna myDinner;

    std::cout << "About my food" << std:: endl;

    std::cout << "Lunch: ";
    myLunch.Swim();

    std::cout << "Dinner: ";
    myDinner.Swim();

    return 0;
}