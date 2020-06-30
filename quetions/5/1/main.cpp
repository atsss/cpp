#include <cstdint>
#include <iostream>
#include <bitset>

int32_t insertion(int32_t N, int32_t M, int i, int j) {
  int32_t allOnes = ~0;
  int32_t left = allOnes << (j + 1);
  int32_t right = ((1 << i) - 1);

  int32_t mask = left | right;
  int32_t nClear = N & mask;
  int32_t mShift = M << i;

  return nClear | mShift;
}

int main() {
  int32_t result = insertion(0b10000000000, 0b10011, 2, 6);
  std::bitset<32> displayResult = result;
  std::cout << displayResult << std::endl;
}
