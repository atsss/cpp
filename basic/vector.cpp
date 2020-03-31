#include <iostream>
#include <vector>

int main() {

  int total_even = 0;
  int product_odd = 1;

  std::vector<int> vector = {2, 4, 3, 6, 1, 9};

  for (int i = 0; i < vector.size(); i++) {

    if (vector[i] % 2 == 0) {

      total_even = total_even + vector[i];

    } else {

      product_odd = product_odd * vector[i];

    }

  }

  std::cout << "Sum of even: " << total_even << "\n";
  std::cout << "Product of odd: " << product_odd;

}


// #include <iostream>
// #include <vector>
//
// std::vector<int> first_three_multiples(int num) {
//   std::vector<int> vectors = {};
//
//   for(int i = 1; i <= 3; i++) {
//     vectors.push_back(num * i);
//   }
//
//   return vectors;
// }
//
// int main() {
//
//   for (int element : first_three_multiples(8)) {
//     std::cout << element << "\n";
//   }
//
// }
