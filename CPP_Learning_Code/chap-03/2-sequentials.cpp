#include <list>
#include <array>
#include <iostream>
#include <stack>
#include <vector>

enum Fruit
{
    Abricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    // Implement array tests here.
    std::array<std::string, Fruit_Count> fruits;
    fruits[Abricot]   = "abricot";
    fruits[Cherry]    = "cerise";
    fruits[Mango]     = "mango";
    fruits[Raspberry] = "framboise";
}

std::ostream& operator<<(std::ostream& ostr, const std::list<int>& list)
{
    for (auto &i : list) {
        ostr << " " << i;
    }
    return ostr;
}

void try_lists()
{
    std::list<int> l1;
    std::list<int> l2;
    std::list<int> l3;
    std::list<int> l4;

    for(int i = 0; i < 10; ++i)
    {
        l1.push_front(i);
        l2.push_front(i*2);
        l3.push_front(i*i);
        l4.push_front(i+i);
    }

    l1.sort();
    l2.sort();
    l3.sort();
    l4.sort();

    std::cout << "merging l1 and l2:" << std::endl;
    std::cout << l1 << std::endl << l2 << std::endl;
    l1.merge(l2);
    std::cout << l1 << std::endl;
    
    std::cout << "merging l3 and l4:" << std::endl;
    std::cout << l3 << std::endl << l4 << std::endl;
    l3.merge(l4);
    std::cout << l3 << std::endl;

    auto it = l1.begin();
    std::advance(it, l1.size()/2);

    l1.splice(it, l3);
    std::cout << l1 << std::endl;
}

void try_stacks()
{
    // stack utilise std::deque pour son implémentation
    // deque permet l'ajout et la suppression d'élémets en O(1)
    // réallocation plus performante

    // Implement stack tests here.
    std::vector <int> v {0, 1, 2};
    std::stack<int, std::vector<int>> s {v};

    while(!s.empty())
    {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}