#include <iostream>
#include <set>
#include <string>

class NumAndName {
  const int         _number;
  const std::string _name;
  
public:
  NumAndName(int number, std::string_view name) :
    _number { number }, _name { name }
  {}
  
  friend std::ostream& operator<<(std::ostream& os, const NumAndName& n) {
    return os << n._name;
  }

  bool operator<(const NumAndName& other) const
  {
    return _number > other._number;
  }
};

const std::set<NumAndName> num_and_names { { 3, "trois" }, { 1, "un" }, { 2, "deux" }, { 0, "zero" } };

int main() {
  for (const auto& nn: num_and_names) {
    std::cout << nn << ' ';
  }
  
  return 0;
}