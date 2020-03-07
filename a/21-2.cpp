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

  ll n;
  cin >> n;

  string s = to_string(n);
  int keta = s.size();

  // dp[i][j] = 左からi桁目, jが1ならi桁目でn未満確定 0ならnピッタリ
  int dp[20][2];
  dp[0][0] = s[0] - '0';
  dp[0][1] = s[0] - '0' - 1;

  for (int i = 0; i < keta; i++) {
    int num = s[i + 1] - '0';

    dp[i + 1][0] = dp[i][0] + num;
    dp[i + 1][1] = dp[i][1] + 9;
  }

  cout << max(dp[keta - 1][0], dp[keta - 1][1]) << endl;

  return 0;
}