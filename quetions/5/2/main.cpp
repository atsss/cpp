#include <cstdint>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <limits>

std::string binaryToString(double binary) {
  if (binary < 0 || binary > 1) { return "ERROR"; }
  if (binary == 1) { return "1"; }
  if (binary == 0) { return "0"; }

  std::stringstream str;
  str << "0.";

  while (binary != 0) {
    if (str.tellp() > 32) { return "ERROR"; }

    binary *= 2;
    if (binary >= 1) {
      str << '1';
      binary -= 1;
    } else { str << '0'; }
  }

  return str.str();
}

int main() {
  double value = 0;
  double frac = 1.0 / 2 + 1.0 / 8;

  std::cout << std::setprecision(std::numeric_limits<double>::digits10 + 1);

  for (int i = 0; i < 10; ++i) {
    std::cout << value << ": " << binaryToString(value) << std::endl;
    value += frac;
    frac /= 16;
  }
}
