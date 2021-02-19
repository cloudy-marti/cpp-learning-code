#pragma once

#include <iostream>
#include <vector>

#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Cow.h"
#include "Dog.h"

class Opera
{
    private:
        std::vector<Animal*> _animals;

    public:
        Opera()
        {
            _animals.emplace_back(new Dog {});
            _animals.emplace_back(new Cat {});
            _animals.emplace_back(new Chicken {});
            _animals.emplace_back(new Cow {});
        }

        ~Opera()
        {
            for(Animal* animal : _animals)
            {
                delete animal;
            }
        }

        void sing() const { for (const Animal* animal : _animals) { animal->sing(' '); } std::cout << std::endl; }
};