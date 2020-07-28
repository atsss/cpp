#include<iostream>

using namespace std;

int main() {
  int N;
  int x[100010] = {0};
  int y[100010] = {0};
  int t[100010] = {0};

  cin >> N;
  for (int i = 1; i <= N; ++i) cin >> t[i] >> x[i] >> y[i];

  for (int i = 1; i <= N; ++i) {
    int dt = t[i] - t[i-1];
    int dist = abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);

    if(dt < dist || dt % 2 != dist % 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}

// #include <iostream>
// using namespace std;
//
// int main() {
//   int N;
//   int t[110000], x[110000], y[110000];
//   cin >> N;
//   t[0] = x[0] = y[0] = 0;
//   for (int i = 0; i < N; ++i) cin >> t[i+1] >> x[i+1] >> y[i+1];
//
//   bool can = true;
//   for (int i = 0; i < N; ++i) {
//     int dt = t[i+1] - t[i];
//     int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
//     if (dt < dist) can = false;
//     if (dist % 2 != dt % 2) can = false;
//   }
//
//   if (can) cout << "Yes" << endl;
//   else cout << "No" << endl;
// }
