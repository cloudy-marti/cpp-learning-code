#include "Phone.h"

class HomePhone : public Phone
{
public:
    HomePhone(const Person& owner, int position)
        : Phone { owner }
        , _position { position }
    {}

    void ring() const override;

private:
    int _position = 0;
};