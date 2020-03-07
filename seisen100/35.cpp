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

  int dp[n + 10][W + 10] = {};

  /*
  dp[i][w] = wを超えないようにi個選んだときの最大価値
  */

  for (int i = 0; i < n; i++) {
    for (int lim = 0; lim <= W; lim++) {
      // w[i] が lim を超えてるならその品物は絶対に選べないのでガードする
      if (lim >= w[i]) {
        // 今の品物を選ぶかどうか判断
        // 今の品物を選ぶ場合は、今の品物の重さを引いたlimの回の最大値 + 今の品物の価値
        dp[i + 1][lim] = max(dp[i][lim], dp[i][lim - w[i]] + v[i]);
      } else {
        // 絶対に選べないパターン
        dp[i + 1][lim] = dp[i][lim];
      }
    }
  }

  cout << dp[n][W] << ln;

  return 0;
}