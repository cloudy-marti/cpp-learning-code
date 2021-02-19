#include "MinuteHand.h"

class SecondHand
{
    private:
        unsigned int _seconds;
        MinuteHand& _min_hand;

    public:
        SecondHand(MinuteHand&);

        unsigned int get_seconds() const;

        void avance();
};