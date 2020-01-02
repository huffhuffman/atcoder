#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

ll dp[100][100][5000]; // dp[i][j][k] := i枚目までのカードからj枚選んだ合計がkの数

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, a;
  cin >> n >> a;

  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  ll ans = 0;

  dp[0][0][0] = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < 5000; k++) {
        if (dp[i][j][k] == 0) continue;
        dp[i + 1][j + 1][k + x[i]] += dp[i][j][k];
        dp[i + 1][j][k] += dp[i][j][k];
        
        /*
        i枚目までからj枚選んだ合計がkの数
        i+1枚目までからj+1枚選んだ合計がk+x[i]の数
        dp[i + 1][j + 1][k + x[i]] = x[i]一枚を追加したところにそれまでの合計を配る
        dp[i + 1][j][k] 一枚目までからj枚選んだ合計kの数は同じ
        */
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    ans += dp[n][i][a * i];
  }

  cout << ans << endl;

  return 0;
}