#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;

  vector<vector<string>> dp(s.size() + 1, vector<string>(t.size() + 1, ""));
  for (int i = 1; i <= s.size(); i++) {
    bool prevAdd = false;
    for (int j = 1; j <= t.size(); j++) {
      if (dp[i][j - 1] + t[j - 1] == dp[i - 1][j] + s[i - 1]) {
        dp[i][j] = dp[i - 1][j] + s[i - 1];
        prevAdd = true;
      } else {
        dp[i][j] = prevAdd ? dp[i][j - 1] : dp[i - 1][j];
      }
    }
  }

  cout << dp[s.size()][t.size()] << endl;

  return 0;
}