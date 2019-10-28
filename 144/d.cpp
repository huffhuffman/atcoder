#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, x;
  cin >> a >> b >> x;

  cout << setprecision(12);

  double h = (double)x / (a * a);

  double l = 2 * h - b;

  double c = 2 * a * h / b;

  if (l >= 0) {
    cout << atan((b - l) / a) * 180 / M_PI << endl;
  } else {
    cout << atan(b / c) * 180 / M_PI << endl;
  }

  return 0;
}