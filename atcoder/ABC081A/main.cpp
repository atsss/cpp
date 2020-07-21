#include<iostream>
#include <algorithm>
using namespace std;

int main() {
  string input;
  cin >> input;

  cout << count(input.begin(), input.end(), '1') << endl;

  return 0;
}
