#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> x(n), y(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];

    c[i] = i;
  }

  int pm = 0;
  double sum = 0;

  do {
    for (int i = 1; i < n; i++) {
      int idx1 = c[i - 1];
      int idx2 = c[i];

      int x1 = x[idx1];
      int x2 = x[idx2];
      int y1 = y[idx1];
      int y2 = y[idx2];

      double rd = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
      double d = sqrt(rd);

      sum += d;
    }
    pm++;
  } while (next_permutation(c.begin(), c.end()));

  double ans = sum / pm;

      cout << setprecision(12);
  cout << ans << endl;

  return 0;
}