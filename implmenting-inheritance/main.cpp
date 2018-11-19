/* Demonstrates the use of inheritance in the piscean world. This program will provide an overview of how inheritance
 * works and functions. */
#include <iostream>

class Fish
{
public:
    bool isFreshWaterFish;

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
        isFreshWaterFish = false;
    }
};

class Carp: public Fish
{
public:
    Carp()
    {
        isFreshWaterFish = true;
    }
};

int main()
{
    Carp myLunch;
    Tuna myDinner;

    std::cout << "About my food:" << std::endl;

    std::cout << "Lunch: ";
    myLunch.Swim();

    std::cout <<"Dinner: ";
    myDinner.Swim();

    return 0;
}