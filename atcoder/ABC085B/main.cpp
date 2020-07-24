#include <iostream>
#include <set>
using namespace std;

int main() {
  int N;
  int d[110];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> d[i];

  set<int> values;
  for (int i = 0; i < N; ++i) values.insert(d[i]);

  cout << values.size() << endl;
}

// バケット法による解
// #include <iostream>
// using namespace std;
//
// int main() {
//     int N;
//     int d[110];
//     cin >> N;
//     for (int i = 0; i < N; ++i) cin >> d[i];
//
//     int num[110] = {0};
//     for (int i = 0; i < N; ++i) {
//         num[d[i]]++;
//     }
//
//     int res = 0;
//     for (int i = 1; i <= 100; ++i) {
//         if (num[i]) {
//             ++res;
//         }
//     }
//     cout << res << endl;
// }
//
