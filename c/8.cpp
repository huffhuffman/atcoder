#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  vector<int> s(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;

      if (c[i] % c[j] == 0) {
        s[i]++;
      }
    }
  }

  double ans = 0.0;
  for (int i = 0; i < n; i++) {
    if (s[i] % 2 == 0) {
      int u = s[i] / 2 + 1;
      double d = s[i] + 1.0;
      ans += u / d;
    } else {
      ans += 0.5;
    }
  }

  cout << setprecision(12) << ans << endl;

  return 0;
}