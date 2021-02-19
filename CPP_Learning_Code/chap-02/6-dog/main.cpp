#include <iostream>

#include "Dog.h"

int main()
{
    Dog d;
    // auto v = d.get();
    // (void)v;

    print(std::cout, d);

    Dog::speak();

    Dog d1;
    Dog d2 = d1;

    (void)d2;

    // const Dog d3;
    // d3.set(8);

    std::cout << d._nb << std::endl;

    Dog d7();

    Dog d8 {-1, 3};

    // std::cout << d==d8 << std::endl;

    return 0;
}
