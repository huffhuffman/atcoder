#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
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

  int dp[n + 10][W + 10] = {};

  for (int i = 0; i < n; i++) {
    for (int lim = 0; lim <= W; lim++) {
      if(w[i] > lim) {
        dp[i + 1][lim] = dp[i][lim];
      } else {
        dp[i + 1][lim] = max(dp[i][lim - w[i]] + v[i], dp[i][lim]);
      }
    }
  }

  cout << dp[n][W] << ln;

  return 0;
}