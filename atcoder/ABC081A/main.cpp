#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main() {
  string input;
  cin >> input;

  cout << count(input.begin(), input.end(), '1') << endl;

  return 0;
}

// #include<iostream>
// #include<string>
//
// using namespace std;
//
// int main() {
//   string input;
//
//   cin >> input;
//
//   int res = 0;
//
//   for (int i = 0; i < input.size(); ++i) {
//     if(input[i] == '1') res++;
//   }
//
//   cout << res << endl;
//
//   return 0;
// }
