#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;
const int INF = 1001001001;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int g[n][n];  // i から j までの距離
  memset(g, INF, sizeof g);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        g[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a][b] = 1;
    g[b][a] = 1;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        g[i][j] = min(g[i][k] + g[k][j], g[i][j]);  // i から j までの最短距離
      }
    }
  }

  for (int i = 0; i < n; i++) {
    int ans = 0;
    for (int j = 0; j < n; j++) {
      if (g[i][j] == 2) {
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}