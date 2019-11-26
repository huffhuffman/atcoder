#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n), b(n);
  vector<vector<int>> g(n);
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  vector<int> e(n, 0);  // 頂点iに属している辺の数
  int k = 0;
  for (int i = 0; i < n - 1; i++) {
    e[a[i]]++;
    e[b[i]]++;

    k = max(k, e[a[i]]);
    k = max(k, e[b[i]]);
  }

  cout << k << endl;

  int root = 0;
  vector<vector<int>> color(n, vector<int>(n, 0));
  vector<bool> pushed(n, false);
  queue<int> Q;

  Q.push(root);
  pushed[root] = true;

  while (!Q.empty()) {
    int u = Q.front();

    vector<bool> ccc(k, true);
    int currColor;
    for (int i = 0; i < g[u].size(); i++) {
      int v = g[u][i];

      if (color[u][v] != 0) {
        ccc[color[u][v] - 1] = false;
      }

      for (int i = 0; i < k; i++) {
        if (ccc[i]) {
          currColor = i;
          break;
        }
      }

      if (!pushed[v]) {
        Q.push(v);
        pushed[v] = true;

        color[u][v] = currColor + 1;
        color[v][u] = currColor + 1;
        ccc[currColor] = false;
      }
    }

    Q.pop();
  }

  for (int i = 0; i < n - 1; i++) {
    cout << color[a[i]][b[i]] << endl;
  }

  return 0;
}