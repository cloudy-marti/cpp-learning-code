#include "MinuteHand.h"

MinuteHand::MinuteHand()
    : _minutes {0} 
{}
        
const unsigned int MinuteHand::get_minutes() const
{
    return _minutes;
}

void MinuteHand::avance()
{
    _minutes++;
}