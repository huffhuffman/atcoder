#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int txa, tya, txb, tyb, t, v;
  cin >> txa >> tya >> txb >> tyb >> t >> v;

  int n;
  cin >> n;

  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  string ans = "NO";

  int p = t * v;
  for (int i = 0; i < n; i++) {
    int dx1 = x[i] - txa;
    int dy1 = y[i] - tya;
    int dx2 = txb - x[i];
    int dy2 = tyb - y[i];
    double d1 = sqrt(dx1 * dx1 + dy1 * dy1);
    double d2 = sqrt(dx2 * dx2 + dy2 * dy2);

    if (d1 + d2 <= p) {
      ans = "YES";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}