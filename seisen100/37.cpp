#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<int> c(m);
  for (int i = 0; i < m; i++) {
    cin >> c[i];
  }

  // dp[i]:=i円払うのに必要な最小の枚数
  int dp[60000] = {};
  for (int i = 0; i < 60000; i++) {
    dp[i] = INF;
  }

  dp[0] = 0;

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < m; j++) {
      int yen = c[j] + i;

      // i + c[j]に配るdp
      dp[yen] = min(dp[yen], dp[i] + 1);
    }
  }

  cout << dp[n] << ln;

  return 0;
}