#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int h, n;
  cin >> h >> n;

  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  vector<int> dp(h + 1, 1000000000);  // dp[dmg]までに必要な最小コスト
  dp[0] = 0;                          //ダメージ0ならコスト0
  for (int i = 0; i < n; i++) {       // a,bを全部試す
    for (int j = 0; j < h; j++) {     // ダメージ0からh-1まで
      int dmg = min(j + a[i], h);
      dp[dmg] = min(dp[dmg], dp[j] + b[i]);
      cout << "j: " << j << ", ai: " << a[i] << ", bi: " << b[i] << endl;
      cout << "dmg: " << dmg << ", dp[dmg]:" << dp[dmg] << endl;
    }
  }

  cout << dp[h] << endl;

  return 0;
}