#include <iostream>

int main() {

  int soda = 99;

  int &pop = soda;

  pop++;

  std::cout << soda;
  std::cout << pop;

}
