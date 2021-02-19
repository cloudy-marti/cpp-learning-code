#include <vector>
#include <numeric>
#include <iostream>

void print_container(const std::vector<unsigned long>& c) 
{
    for (auto &i : c) {
        std::cout << i << " ";
    }
    std::cout << '\n';
}

int main()
{
    int n = 100;
    std::vector<unsigned long> v = std::vector<unsigned long>(n);
    std::iota(v.begin(), v.end(), 2);
    
    auto end = v.end();
    for(auto it = v.begin(); it != end; )
    {
        if((*it)*(*it) <= 100000)
        {
            for(auto it2 = it; it2 != v.end(); )
            {
                if((*it) != (*it2) && (*it)%(*it2) == 0)
                {
                    it2 = v.erase(it2);
                    end = v.end();
                } else
                {
                    ++it2;
                }
            }
        }
    }

    std::cout << v.size() << std::endl;
    
    return 0;
}