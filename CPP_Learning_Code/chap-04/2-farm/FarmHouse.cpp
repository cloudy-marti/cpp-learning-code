#include <vector>

#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Cow.h"
#include "Dog.h"
#include "Opera.h"

void sing_a_lot(const Animal& animal, unsigned int times)
{
    if(times > 0)
    {
        while (times-- > 0)
        {
            animal.sing(' ');
        }
        animal.sing('\n');
    }
}

void sing_chorus(const std::vector<Animal*>& animals)
{
    for(const Animal* animal : animals)
    {
        (*animal).sing(' ');
    }
    std::cout << std::endl;
}

int main()
{
    Cat cat;
    Chicken chicken;
    Dog dog;
    Cow cow;

    sing_a_lot(cat, 2u);
    sing_a_lot(dog, 1u);
    sing_a_lot(cow, 3u);
    sing_a_lot(dog, 1u);
    sing_a_lot(chicken, 2u);

    std::cout << std::endl << "*---- Containers ----*" << std::endl;

    std::vector<Animal*> animals;

    animals.emplace_back(&cat);
    animals.emplace_back(&dog);

    sing_chorus(animals);

    std::cout << std::endl << "*---- Opera ----*" << std::endl;

    Opera opera;
    opera.sing();

    return 0;
}

