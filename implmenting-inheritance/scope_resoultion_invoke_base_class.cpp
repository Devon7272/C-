#include <iostream>

class Fish
{
private:
    bool isFreshWaterFish;

public:
    // Fish Constructor
    Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater){}

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
    Tuna(): Fish(false) {}

    void Swim()
    {
        std::cout << "Tuna swims real fast" << std::endl;
    }
};

class Carp: public Fish
{
public:
    Carp(): Fish(true) {}

    void Swim()
    {
        std::cout << "Carp swims real slow" << std::endl;

        Fish::Swim();
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
    myDinner.Fish::Swim();

    return 0;
}