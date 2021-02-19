#include "HomePhone.h"

void HomePhone::ring() const {
    if (_owner.get_position() == _position)
    {
        _owner.answer_phone();
    }
    else
    {
        std::cout << "This is the voicemail of " << _owner.get_name() << ". Please leave a message." << std::endl;
    }
}