/* Derived class hiding base class methods, this is where overriding can take an extreme form where Tuna::Swim()
 * can potentially hide all overloaded versions of Fish::Swim() available, even causing compilation failure
 * when the overloaded ones are used (hence, called hidden) */

#include <iostream>

class Fish
{
public:
    void Swim()
    {
        std::cout << "Fish swims... !" << std::endl;
    }

    void Swim(bool isFreshWaterFish)// overloaded version
    {
        if(isFreshWaterFish)
            std::cout << "Swim in lake" << std::endl;
        else
            std::cout << "Swims in sea" << std::endl;
    }
};

class Tuna: public Fish
{
public:
    void Swim()
    {
        std::cout << "Tuna swims real fast" << std::endl;
    }
};

int main()
{
    Tuna myDinner;

    std::cout << "About my food" << std::endl;

    //myDinner.Swim(false);// Failure: Tuna::Swim() hides Fish::Swim(bool)
    myDinner.Swim();

    return 0;
}