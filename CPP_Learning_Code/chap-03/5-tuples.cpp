#include <iostream>
#include <string>
#include <tuple>

bool parse_params(int argc, const char* const* argv, int& numerator, int& denominator)
{
    if (argc != 3)
    {
        std::cerr << "Program expects 2 parameters!" << std::endl;
        return false;
    }

    std::string num_str = argv[1];
    std::string den_str = argv[2];
    
    try
    {
        numerator = std::stoi(num_str);
        denominator = std::stoi(den_str);
    }
    catch (const std::exception&)
    {
        std::cerr << "Program expects 2 integer parameters!" << std::endl;
        return false;
    }
    
    if (denominator == 0)
    {
        std::cerr << "Denominator cannot be null!" << std::endl;
        return false;
    }

    return true;
}

int divide(int numerator, int denominator, int& reminder)
{
    reminder = numerator % denominator;
    return numerator / denominator;
}

enum Division
{
    Numerator,
    Denominator,
    Quotient,
    Reminder,
};

int main(int argc, char** argv)
{
    std::tuple<int, int, int, int> div { 0, 0, 0, 0 };

    // int numerator = 0;
    // int denominator = 0;

    if (!parse_params(argc, argv, std::get<Numerator>(div), std::get<Denominator>(div)))
    {
        return 1;
    }

    // int reminder = 0;
    std::get<Quotient>(div) = divide(std::get<Numerator>(div), std::get<Denominator>(div), std::get<Reminder>(div));

    std::cout << std::get<Numerator>(div) << " = " << std::get<Denominator>(div) << " * " << std::get<Quotient>(div) << " + " << std::get<Reminder>(div) << std::endl;   

    return 0;
}