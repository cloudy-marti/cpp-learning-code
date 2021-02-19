#include "Dog.h"

int Dog::_nb = 0;

Dog::Dog()
{}

Dog::Dog(int v1, int v2)
{
    (void)v1;
    (void)v2;
}

int Dog::get() const
{
    return 0;
}

void print(std::ostream& stream, const Dog& dog)
{
    (void)stream;
    (void)dog;
    
}

void Dog::speak()
{

}

void Dog::set(int v)
{
    Dog::_nb = v;
}