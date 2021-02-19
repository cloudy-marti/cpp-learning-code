#include "SecondHand.h"

SecondHand::SecondHand(MinuteHand& min_hand)
    : _seconds {0}, _min_hand {min_hand}
{}

unsigned int SecondHand::get_seconds() const
{
    return _seconds;
}

void SecondHand::avance()
{
    if(_seconds+1 >= 60)
    {
        _seconds = 0;
        _min_hand.avance();
    }
    else {
        _seconds++;
    }
}