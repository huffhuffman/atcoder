#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  reverse(s.begin(), s.end());
  s += '0';

  ll keta = s.size();

  int dp[keta + 1][2]; // 払う金額を決めるDP
  // dp[i][j] := 下からi桁まで決めたとき、繰り下がりがjのときの最小枚数
  for (int i = 0; i < keta + 1; i++) {
    for (int j = 0; j < 2; j++) {
      dp[i][j] = INF;
    }
  }

  dp[0][0] = 0;
  for (int i = 0; i < keta; i++) {
    for (int j = 0; j < 2; j++) {
      int x = s[i] - '0';

      x += j; 

      for (int a = 0; a < 10; a++) {
        int ni = i + 1;
        int nj = 0;
        int b = a - x;
        if (b < 0) {
          nj = 1;
          b += 10;
        }
        dp[ni][nj] = min(dp[ni][nj], dp[i][j] + a + b);
      }
    }
  }

  int ans = dp[keta][0];

  cout << ans << endl;

  return 0;
}