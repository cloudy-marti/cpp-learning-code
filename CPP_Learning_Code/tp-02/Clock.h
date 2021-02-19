#include "MinuteHand.h"
#include "SecondHand.h"

class Clock
{
private:
    /* data */
    SecondHand& _sec_hand;
    MinuteHand& _min_hand;

public:
    Clock();

    void tick();
};