#include "Rectangle.h"

#include <iostream>

int main()
{
    Rectangle rect(2.f, 4.f);
    std::cout << rect << std::endl;

    rect.scale(3);
    std::cout << rect << std::endl;

    Rectangle square(2.5f);
    std::cout << square << std::endl;

    Rectangle rectDefault;
    std::cout << rectDefault << std::endl;

    Rectangle::set_default_size(3.5f);
    Rectangle defaultBig;
    std::cout << defaultBig << std::endl;

    return 0;
}
