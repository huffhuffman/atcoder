#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int m, d;
  cin >> m >> d;

  int ans = 0;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= d; j++) {
      if (j < 10) continue;

      int d1 = j % 10;
      int d2 = j / 10;

      if(d1 < 2 || d2 < 2) continue;

      if (i == d1 * d2) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}