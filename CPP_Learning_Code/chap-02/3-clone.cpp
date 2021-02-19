#include <iostream>
#include <string>

class Person
{
public:
    Person(const std::string& name, const std::string& surname)
        : _name { name }, _surname { surname }
    {}

    Person(const Person& other)
        : _name { other._name }
        , _surname { other._surname }
    {}

    std::string  get_full_name() const { return _name + " " + _surname; }
    unsigned int get_age() const  { return _age; }

    void wait(unsigned int years) { _age += years; }

    // Stream extraction and insertion
    // The overloads of operator>> and operator<< that take a std::istream& or std::ostream& as the left hand argument are known as insertion and extraction operators.
    // Since they take the user-defined type as the right argument (b in a@b), they must be implemented as non-members.
    // Source: https://en.cppreference.com/w/cpp/language/operators

    // inline std::ostream& operator<<(std::ostream& stream)
    // {
    //     return stream << "Person named '" << get_full_name() << "' is " << get_age() << " years old.";
    // }

    Person& operator=(const Person& other)
    {
        if(this != &other)
        {
            _name = other._name;
            _surname = other._surname;
        }
        return *this;
    }

private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;
};

inline std::ostream& operator<<(std::ostream& stream, const Person& person)
{
    return stream << "Static Person named '" << person.get_full_name() << "' is " << person.get_age() << " years old.";
}

int main()
{
    Person batman { "Bruce", "Wayne" };
    batman.wait(23);

    std::cout << batman << std::endl;

    Person bruce { batman };
    std::cout << bruce << std::endl;

    Person wayne = batman;
    std::cout << wayne << std::endl;

    Person assigned_clone { "Batman", "2" };
    std::cout << assigned_clone << std::endl;

    assigned_clone = batman;
    std::cout << assigned_clone << std::endl;

    return 0;
}
