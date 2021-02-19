#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>

int main()
{
    /* ------- Construction -------*/

    // will give a vector of two elements 4 and 0
    // using the following constructor:
    // vector( std::initializer_list<T> init,
        // const Allocator& alloc = Allocator() );
    std::cout << "Using {} to instanciate vector:" << std::endl;
    std::vector<int> v {4, 0};
    for(int e : v)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    // will give a vector with for elements initialized to 0
    // using the following constructor:
    // constexpr vector( size_type count,
                //   const T& value,
                //   const Allocator& alloc = Allocator());
    std::cout << "Using () to instanciate vector:" << std::endl;
    std::vector<int> v1 (4, 0);
    for(int e : v1)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    int array[] = { 0, 1, 2, 3, 4, 5 };
    int* it = &array[0];

    std::cout << "Using half [] iterator to instanciate vector:" << std::endl;
    std::vector<int> v2 (it+2, it+5);
    for(int e : v2)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    std::cout << "Using [] iterator to instanciate vector:" << std::endl;
    std::vector<int> v3 (it, it+6);
    for(int e : v3)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    /* ------- Accès aux éléments -------*/

    size_t size = v3.size();
    for(size_t left = 0, right = size-1; left < right; ++left, --right)
    {
        std::swap(v3[left], v3[right]);
    }
    std::cout << "reversed v3:" << std::endl;
    for(int e : v3)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    /* ------- Insertion -------*/
    for(auto it = v3.begin(); it != v3.end(); it+=2)
    {
        it = v3.insert(it, *it);
    }
    for(int e : v3)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    /* ------- Supression -------*/
    std::vector<int> v4 {v3};
    while(!v3.empty())
    {
        v3.pop_back();
    }
    std::cout << "size = " << v3.size() << std::endl;

    v4.erase(v4.begin()+3);
    for(int e : v4)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    v4.erase(v4.begin()+2, v4.begin()+7);
    for(int e : v4)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    const auto it4 = std::find(v4.begin(), v4.end(), 1);
    if(it4 != v4.end())
    {
        v4.erase(it4);
    }
    for(int e : v4)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    /* ------- Opérations globales -------*/
    v4.assign(5, 2);
    for(int e : v4)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    v4.assign({ 0, 2, 32, -4, 3 });
    for(int e : v4)
    {
        std::cout << e << ", ";
    }
    std::cout << std::endl;

    return 0;
}