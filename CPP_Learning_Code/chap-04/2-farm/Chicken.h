#pragma once

#include <iostream>

class Chicken : public Animal
{
public:
    void sing(char next_char) const override { std::cout << "Cotcotcotcodet" << next_char; }
    ~Chicken() override { std::cout << "CotCooooooooooooot!" << std::endl; }
};
