#include <iostream>
int main(int argc, char** argv)
{
    // as all warnings are treated as errors, unused variables are considered errors

    short s0;
    std::cout << s0 << std::endl;

    int   i1 = 2;
    bool  b2{false};
    bool  b3{i1};
    bool* b4;
    unsigned       u5{0x10};
    unsigned short us6 = -10;
    std::cout << us6 << std::endl;
    unsigned long  ul7{b3 + u5 + us6};
    std::cout << ul7 << std::endl;

    // char c8{"a"};
    char c8bis{'a'};
    // fails at compilation because -Werror ISO C++ forbids converting a string constant to char*
    // char* c8ter{"a"};
    char* c8ter{&c8bis};

    char c9 = -10;
    // fails at compilation because -Werror forbids conversion from int to double inside {}
    // double d10{i1};
    double d10 = i1;

    // double* d11{d10};
    double* d11bis{&d10};

    // double& d12;
    double& d12bis {d10};
    double& d12ter = d10;

    const double d13{.0f};
    const int    i14 = i1;
    int* i15 = &i1;

    std::cout << *i15 << std::endl;

    // int* i16 = &b2;
    bool* i16bis = &b2;

    int  i17 = *i15;

    // int& i18{i14};
    const int& i18bis{i14};

    const int* i19{nullptr};

    // const bool b20;
    const bool b20 = false;

    return 0;
}