#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> x(3), y(3);
  for (int i = 0; i < 3; i++) {
    cin >> x[i] >> y[i];
  }

  x[1] -= x[0];
  y[1] -= y[0];
  x[2] -= x[0];
  y[2] -= y[0];

  double ans = abs(x[1] * y[2] - x[2] * y[1]) / 2.0;

  cout << setprecision(10);
  cout << ans << endl;

  return 0;
}