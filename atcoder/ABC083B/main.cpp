#include <iostream>
using namespace std;

int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int total = 0;
  for (int i = 1; i <= N; ++i) {
    int sum = findSumOfDigits(i);
    if (sum >= A && sum <= B) total += i;
  }
  cout << total << endl;
}

// int main() {
//   int N, A, B;
//   cin >> N >> A >> B;
//
//   int res = 0;
//   for (int i = 0; i <= N; ++i) {
//     int total = 0;
//     int tmp = i;
//
//     if (tmp >= 10000) {
//       total += i % 10000;
//       tmp -= 10000 * (i % 10000);
//     }
//     total += i % 1000;
//     total += i % 100;
//     total += i % 10;
//     if (total >= A && total <= B) res += i;
//   }
//
//   cout << res << endl;
// }
