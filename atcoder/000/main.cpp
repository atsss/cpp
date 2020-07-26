// #include<iostream>
// using namespace std;
//
// int main() {
//   int a;
//   cin >> a;
//
//   int b,c;
//   cin >> b >> c;
//
//   string s;
//   cin >> s;
//
//   cout << (a+b+c) << " " << s << endl;
//   return 0;
// }

#include<iostream>
#include<string>

using namespace std;

int main() {
  int a, b, c, sum;
  string s;

  cin >> a >> b >> c >> s;

  sum = a + b + c;

  cout << sum << " " << s << endl;

  return 0;
}
