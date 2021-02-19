#include <iostream>

class Person
{
    private:
        std::string     m_name;
        unsigned short  m_age = 0u;
    
    public:
        inline void set_name(const std::string& name) { m_name = name; }
        inline void set_age(unsigned short age) { m_age = age; }
        inline const std::string& get_name() const { return m_name; }
        inline unsigned short get_age() const { return m_age; }
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
