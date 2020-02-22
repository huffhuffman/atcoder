#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  ll ans = 0;
  for (int t1 = 0; t1 < m; t1++) {
    for (int t2 = 0; t2 < m; t2++) {
      if (t1 == t2) continue;

      ll g_score = 0;
      for (int i = 0; i < n; i++) {
        int s1 = a[i][t1];
        int s2 = a[i][t2];

        g_score += max(s1, s2);
      }

      if (ans < g_score) {
        ans = g_score;
      }
    }
  }

  cout << ans << endl;

  return 0;
}