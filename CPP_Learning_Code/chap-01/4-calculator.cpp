#include <iostream>
#include <string>
#include <vector>

bool parse_params(char& op, std::vector<int>& values, int argc, char** argv);
int compute_result(char op, const std::vector<int> values);
void display_result(int result); 

int add(const std::vector<int> values);
int multiply(const std::vector<int> values);
int sub(const std::vector<int> values);

// If we wanted to use the enum for Operands
// enum Operand { add = '+', mult = '*', sub = '-' };

int main(int argc, char** argv)
{
    // Parsing program parameters
    char op = '?';
    std::vector<int> values;

    if(!parse_params(op, values, argc, argv))
    {
        return -1;
    }

    // Process operation, depending on the operator.
    int result = compute_result(op, values);

    // Output result.
    display_result(result);

    return 0;
}

bool parse_params(char& op, std::vector<int>& values, int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "Expected operator as first argument." << std::endl;
        return false;
    }

    // using == with strings instead of char* will compare the actual value of the string
    // whereas using == with char* will compare the adresses
    std::string tmpOp = argv[1];
    if (tmpOp != "+" && tmpOp != "*" && tmpOp != "-")
    {
        std::cerr << "Expected operator to be '+', '*' or '-'." << std::endl;
        return false;
    }
    op = tmpOp[0]; // give the pointer to the first character

    for (auto arg_i = 2; arg_i < argc; ++arg_i)
    {
        auto value = std::stoi(argv[arg_i]);
        values.emplace_back(value); 
    }

    if (op == '-' && values.empty())
    {
        std::cerr << "Operator '-' expects at least one operand to substract from." << std::endl;
        return false;
    }

    return true;
}

int compute_result(char op, const std::vector<int> values)
{
    auto result = 0;

    switch(op) {
        case '+':
            result = add(values);
            break;

        case '*':
            result = multiply(values);
            break;

        case '-':
            result = sub(values);
        break;

        default:
            break;
    }
    return result;
}

void display_result(int result)
{
    std::cout << "Result is " << result << std::endl;
}

int add(const std::vector<int> values)
{
    int result = 0;
    for (auto v : values)
    {
        result += v;
    }
    return result;
}

int multiply(const std::vector<int> values)
{
    auto result = 1;
    for (auto v : values)
    {
        result *= v;
    }
    return result;
}

int sub(const std::vector<int> values)
{
    auto result = values[0];
    for (std::vector<int>::size_type i = 1; i < values.size(); ++i)
    {
        result -= values[i];
    }
    return result;
}