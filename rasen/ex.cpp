#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int fact(int n) {
  int res = 1;

  for (int i = 2; i <= n; i++) {
    res = res * i;
  }

  return res;
}

int nCr(int n, int r) { return fact(n) / (fact(r) * fact(n - r)); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int dp[10][10];

  memset(dp, 0, sizeof(dp));

  dp[0][0] = 1;

  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
      dp[x + 1][y] += dp[x][y];
      dp[x][y + 1] += dp[x][y];
    }
  }

  // cout << dp[3][3] << endl;

  cout << nCr(6, 3) << endl;

  return 0;
}