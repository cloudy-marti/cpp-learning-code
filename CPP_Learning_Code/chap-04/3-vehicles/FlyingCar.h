#pragma once

#include "Car.h"

class FlyingCar : public Car
{
private:
        unsigned int _flying_speed = 0;

public:
    FlyingCar(const Driver& driver, unsigned int speed)
        : Car { driver, speed }
        , _flying_speed { 10u * speed }
    {}
    
    unsigned int drive() const override
    {
        if( _driver.has_licence() )
        {
            std::cout << "Sweeeesh!" << std::endl;
            return _flying_speed;
        }
        else
        {
            std::cout << "eehhh" << std::endl;
            return 0u;
        }
    }
}