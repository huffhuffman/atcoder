#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll k;
  cin >> k;
  ll ans = 0;
  vector<vector<ll>> dp(300, vector<ll>(300));
  for (int i = 1; i <= k; i++) {
    for (int j = 1; j <= k; j++) {
      if (dp[i][j] != 0) continue;
      dp[i][j] = __gcd(i, j);
      dp[j][i] = dp[i][j];
    }
  }

  for (int i = 1; i <= k; i++) {
    for (int j = 1; j <= k; j++) {
      for (int x = 1; x <= k; x++) {
        ans += dp[i][dp[j][x]];
      }
    }
  }

  cout << ans << ln;

  return 0;
}