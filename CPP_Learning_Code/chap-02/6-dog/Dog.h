#include <ostream>

class Dog
{
    public:
        Dog();
        Dog(int v1, int v2);

        void set(int v);
        int get() const;

        static int _nb;
        static void call(const Dog& d);
        static void speak();


    private:
        void move();

        friend void print(std::ostream& stream, const Dog& dog);
};
