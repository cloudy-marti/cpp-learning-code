// class SharedStuff
// {
// protected:
//     int _value;
// // le constructeur doit être accessible hors des classes filles ?
// // si oui on le laisse dans public, si non on le met dans protected
// public:
//     SharedStuff(int value)
//         : _value { value }
//     {}
// };


// #include <iostream>
// class MoreStuff : public SharedStuff
// {
// private:
//     int _value2;
// public:
//     MoreStuff(int value1, int value2)
//         : SharedStuff { value1 }
//         , _value2 { value2 }
//     {}

//     void display() const { std::cout << SharedStuff::_value << " " << _value2 << std::endl; }
// };


// class A
// {
// public:
//     virtual int  fcn1(int p1, int p2) const { return p1 * p2; }
//     virtual void fcn2(const char* str) = 0;
//     virtual void fcn3(bool) {}
//     const char*  fcn4() { return "artichaut"; }
// };

// class B : public A
// {
// public:
//     int fcn1(int p1, int p2) const override { return p1 + p2; }

//     void fcn2(const char*) override {}

//     void fcn3(bool b) override
//     {
//         if (b)
//         {
//             A::fcn3(b);
//         }
//     }
    
//     const char* fcn4() { return "sopalin"; }
// };

#include <iostream>

class Food
{
public:
    virtual void display_food() const = 0;
};

class Nutella : public Food
{
public:
    void display_food() const override { std::cout << "Nutella" << std::endl; }
};

int main()
{
    Nutella* n = new Nutella();
    n->display_food();
    // MoreStuff m { 1, 2 };
    // m.display();
//     A* a = new B();

//     std::cout << a->fcn1(1, 3) << std::endl;
//     a->fcn2("la la la");
//     a->fcn3(false);
//     std::cout << a->fcn4() << std::endl;

    return 0;
}

// // class Nothing
// // {
// // public:
// //     virtual void do_nothing() const { }
// // };