#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int INF = 1001001001;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, W;
  cin >> n >> W;

  vector<int> v(n), w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i] >> v[i];
  }

  vector<vector<int>> dp(n + 1, vector<int>(200000, INF));
  dp[0][0] = 0;

  for (int i = 0; i < n; i++) {
    for (int sumV = 0; sumV <= 100100; sumV++) {
      if (sumV - v[i] >= 0) {
        dp[i + 1][sumV] = min(dp[i + 1][sumV], dp[i][sumV - v[i]] + w[i]);
      }

      dp[i + 1][sumV] = min(dp[i + 1][sumV], dp[i][sumV]);
    }
  }

  ll ans = 0;
  for (int sumV = 0; sumV < 100100; sumV++) {
    if (dp[n][sumV] <= W) ans = sumV;
  }

  cout << ans << endl;

  return 0;
}