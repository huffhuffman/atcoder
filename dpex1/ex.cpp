#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;

  vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1, 0));

  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < t.size(); j++) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
      }

      dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j + 1]);
      dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i + 1][j]);
    }
  }

  string ans = "";
  int i = (int)s.size();
  int j = (int)t.size();
  while (i > 0 && j > 0) {
    if (dp[i][j] == dp[i - 1][j]) {
      --i;
    } else if (dp[i][j] == dp[i][j - 1]) {
      --j;
    } else {
      ans = s[i - 1] + ans;
      --i;
      --j;
    }
  }

  cout << ans << endl;

  return 0;
}