#include "PhoneNumber.h"

PhoneNumber::PhoneNumber(int a, int b, int c, int d, int e)
    : _phone_number {a, b, c, d, e}
{};

bool PhoneNumber::is_valid() const
{
    for(int nb : _phone_number)
    {
        if (nb < 0 || nb > 99)
        {
            return false;
        }
    }
    return true;
}