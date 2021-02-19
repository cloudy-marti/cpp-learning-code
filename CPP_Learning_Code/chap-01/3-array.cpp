#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    if(argc < 2)
    {
        std::cerr << "Wrong number of arguments. Please give a size." << std::endl;
        return -1;
    }
    else
    {
        std::cout << "size = " << argv[1] << std::endl;
    }
    int array[] = { 0, 1, 2, 3 };

    std::cout << "Using for loop" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        std::cout << array[i] << std::endl;
    }

    std::cout << "Using forEach loop" << std::endl;
    for (int value : array)
    {
        std::cout << value << std::endl;
    }

    std::cout << "Initialize new array" << std::endl;
    int newArray[50] = {}; // initializing items at 0

    for(int i = 0; i < 50; ++i)
    {
        newArray[i] = i+1;
        std::cout << newArray[i] << std::endl;
    }

    std::cout << "Using argument to create new array" << std::endl;
    int length = std::atoi(argv[1]);

    if(length <= 0) {
        std::cerr << "Length should be positive" << std::endl;
        return -1;
    }

    std::cout << "Integer length = " << length << std::endl;

    int* value = new int(4);
    std::cout << "Using new" << std::endl << "Value is " << *value << std::endl;
    delete value;

    // use {} if you want to initialize all values to 0
    int* values = new int[4] { 0, 1, 2, 3 };
    std::cout << "Values are " << values[0] << ", " << values[1] << ", " << values[2] << ", " << values[3] << std::endl;
    delete[] values;

    int* newValues = new int[length] {};
    std::cout << "values are ";

    // cannot use forEach
    // 'begin' was not declared in this scopegcc
    // forEach doesn't work with dynamic arrays if no iterator is set
    // for(int value : newValues)
    // {
    //     std::cout << value << " ";
    // }

    for(int i = 0; i < length; ++i)
    {
        std::cout << newValues[i] << ", ";

    }
    std::cout << std::endl;
    delete[] values;

    std::cout << "Using vectors" << std::endl;

    std::vector<int> vect;
    for (int i = 0; i < length; ++i)
    {
        vect.emplace_back(i+1);
    }

    std::cout << "values are ";
    for(int value : vect) {
        std::cout << value << ", ";
    }
    std::cout << std::endl;

    return 0;
}
