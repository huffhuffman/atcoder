#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  string s;
  cin >> n >> s;

  vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
  for (int i = n - 1; i >= 0; i--) {
    for (int j = n - 1; j >= 0; j--) {
      if (s[i] == s[j]) {
        dp[i][j] = dp[i + 1][j + 1] + 1;
      } else {
        dp[i][j] = 0;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i >= j) continue;

      ans = max(ans, min(dp[i][j], j - i));
    }
  }

  cout << ans << endl;

  return 0;
}