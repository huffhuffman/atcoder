#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<int> c(m);
  for (int i = 0; i < m; i++) {
    cin >> c[i];
  }

  int dp[n + 100] = {};  // n円払うのに必要な最小枚数
  for (int i = 0; i < n + 100; i++) {
    dp[i] = INF;
  }

  for (int i = 0; i < m; i++) {
    dp[c[i]] = 1;
  }

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < m; j++) {
      if (i >= c[j]) {
        dp[i] = min(dp[i], dp[i - c[j]] + 1);
      }
    }
  }

  cout << dp[n] << ln;

  return 0;
}