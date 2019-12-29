#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  int ansT = 0;
  double ansC = -1;
  int ansS = 0;
  for (int i = 0; i <= 30; i++) {
    for (int j = 0; j <= 30; j++) {
      int water = i * a * 100 + j * b * 100;
      int limSugar = (i * a + j * b) * e;

      for (int x = 0; x * c <= limSugar; x++) {
        for (int y = 0; x * c + y * d <= limSugar; y++) {
          int sugar = x * c + y * d;

          int total = water + sugar;

          if (total > f) break;

          double calc = sugar * 100.0 / (water + sugar);

          if (calc > ansC) {
            ansC = calc;
            ansT = total;
            ansS = sugar;
          }
        }
      }
    }
  }

  cout << ansT << " " << ansS << endl;

  return 0;
}