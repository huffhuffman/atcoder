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

  int n, W;
  cin >> n >> W;

  vector<int> v(n), w(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i] >> w[i];
  }

  int dp[W + 10] = {};
  for (int lim = 0; lim <= W; lim++) {
    for (int j = 0; j < n; j++) {
      if (lim >= w[j]) {
        dp[lim] = max(dp[lim], dp[lim - w[j]] + v[j]);
      }
    }
  }

  cout << dp[W] << endl;

  return 0;
}