#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<vector<bool>> G(n, vector<bool>(n, false));
  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    --u;

    for (int j = 0; j < k; j++) {
      int v;
      cin >> v;
      --v;

      G[u][v] = true;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << G[i][j];

      if (j != n - 1) cout << " ";
    }

    cout << endl;
  }

  return 0;
}