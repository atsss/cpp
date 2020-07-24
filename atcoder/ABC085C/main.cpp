#include <iostream>
using namespace std;

void caluclateAmount(int bills[3] , int N, int Y) {
  for (int a = 0; a <= N; ++a) {
    for (int b = 0; b + a <= N; ++b) {
      int c = N - a - b;
      int total = 10000*a + 5000*b + 1000*c;
      if (total == Y) {
        bills[0] = a;
        bills[1] = b;
        bills[2] = c;

        return;
      }
    }
  }

  return;
}


int main() {
  int N, Y;
  cin >> N >> Y;
  int res[3] = { -1, -1, -1 };

  caluclateAmount(res, N, Y);

  cout << res[0] << " " << res[1] << " " << res[2] << endl;
}
