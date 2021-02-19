class A {
  int x;
  virtual void some_function() {}
};

class B {
  int x;
  void some_function() {}
};


#include <iostream>

int main()
{   
    A a;
    B b;

    std::cout << "size of a: " << sizeof(a) << std::endl;
    std::cout << "size of b: " << sizeof(b) << std::endl;
    return 0;
}