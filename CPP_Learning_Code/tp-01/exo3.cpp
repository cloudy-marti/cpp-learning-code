#include <iostream>
#include <vector>

int add(const int a, const int b) {
  return a + b;
}

void add_to(int& a, int b) {
  a += b;
}

void another_add_to(int* a, int b) {
  *a += b;
}

int main() {
  const int x{10};
  int y = add(x, x);
  another_add_to(&y, y);
  add_to(y, 2);
  std::cout << y << std::endl;

  return 0;
}