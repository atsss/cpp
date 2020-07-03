#include <iostream>
#include <vector>

using namespace std;
const int initialNumber = -1;

int countWays(int n, vector<int> memo) {
  if (n < 0) { return 0; }
  else if (n == 0) { return 1; }
  else if (memo[n] > initialNumber) { return memo[n]; }
  else {
    memo[n] = countWays(n - 1, memo) + countWays(n - 2, memo) + countWays(n - 3, memo);

    return memo[n];
  }
}

int countWays(int n) {
  vector<int> memo(n + 1, initialNumber);

  return countWays(n, memo);
}

int main() {
  int N;
  cout << "Enter N: ";
  cin >> N;

  cout << countWays(N) << endl;
}
