#include <string>

#include "PhoneNumber.h"

class Person
{
    private:
        std::string _name;
        std::string _last_name;
        PhoneNumber _phone_number;

    public:
        Person(std::string name, std::string last_name);
        Person(std::string name, std::string last_name, PhoneNumber number);
        std::string get_full_name() const;
};