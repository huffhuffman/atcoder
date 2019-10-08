#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }

  vector<vector<int>> dp(n + 1, vector<int>(3, 0));
  int A = 0;
  int B = 1;
  int C = 2;

  for (int i = 0; i <= n; i++) {
    if (i == 0) continue;

    dp[i][A] = a[i - 1] + max(dp[i - 1][B], dp[i - 1][C]);
    dp[i][B] = b[i - 1] + max(dp[i - 1][A], dp[i - 1][C]);
    dp[i][C] = c[i - 1] + max(dp[i - 1][A], dp[i - 1][B]);
  }

  cout << max(dp[n][A], max(dp[n][B], dp[n][C])) << endl;

  return 0;
}