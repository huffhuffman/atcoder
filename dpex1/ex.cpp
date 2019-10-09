#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, wl;
  cin >> n >> wl;

  vector<int> w(n), v(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i] >> v[i];
  }

  vector<vector<ll>> dp(n + 1, vector<ll>(wl + 1, 0));
  for (int i = 0; i < n; i++) {
    // dp := i-1までの品物からsumWを超えないように選んだときの価値の総和のmax
    for (int sumW = 0; sumW <= wl; sumW++) {
      if (sumW - w[i] >= 0) {
        // iを選ぶ場合
        dp[i + 1][sumW] = max(dp[i + 1][sumW], dp[i][sumW - w[i]] + v[i]);
      }

      // iを選ばない場合
      dp[i + 1][sumW] = max(dp[i + 1][sumW], dp[i][sumW]);
    }
  }

  cout << dp[n][wl] << endl;

  return 0;
}