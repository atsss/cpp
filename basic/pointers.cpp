#include <iostream>

int main() {

  int power = 9000;
  int* ptr = nullptr;

  ptr = &power;

  std::cout << ptr;

  std::cout << *ptr << "\n"; // Dereference
}
