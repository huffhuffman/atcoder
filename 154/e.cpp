#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int dp[105][4][2];
// dp[i][j][k] := 条件がijkのときのパターン数
// i := 左から何桁目の数値まで決めたか
// j := non_zeroの数
// k := if 0 then 左からiまで、nと一致 else if 1 then
// 以降右にいってもn以下と確定

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;
  int n = s.size();

  int non_zero;
  cin >> non_zero;

  dp[0][0][0] = 1;  // 0 になるのは1パターンだけ
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4; j++) {
      for (int k = 0; k < 2; k++) {
        int curr = s[i] - '0';  // nの現在見ている桁の値

        // 0 ~ 9
        for (int d = 0; d < 10; d++) {
          int ni = i + 1;    // 次の桁へ
          int nj = j;        // 次の桁をdにしたときのnon_zeroの数
          int nk = k;        // 次の桁をdにしたときのk
          if (d != 0) nj++;  // ゼロでなければnon_zeroの数を+1
          if (nj > non_zero)
            continue;  // non_zeroのリミット超えたらダメなのでスキップ
          if (k == 0) {  // k==0すでにギリギリなので次の桁でcurr超えたらアウト
            if (d > curr) continue;
            if (d < curr) nk = 1;  //大丈夫なら0~9まわしておｋ
          }
          dp[ni][nj][nk] += dp[i][j][k];  // 次の桁へパターン数をプラス
        }
      }
    }
  }
  int ans = dp[n][non_zero][0] + dp[n][non_zero][1];

  cout << ans << endl;

  return 0;
}