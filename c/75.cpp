#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

bool g[50][50];

bool visited[50];

int n, m;

int dfs(int v) {
  visited[v] = 1;

  for (int c = 0; c < n; c++) {
    if (!g[v][c]) continue;
    if (visited[c]) continue;
    dfs(c);
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  vector<int> aa(50), bb(50);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;

    a--;
    b--;
    g[a][b] = 1;
    g[b][a] = 1;
    aa[i] = a;
    bb[i] = b;
  }

  int ans = 0;

  for (int i = 0; i < m; i++) {
    g[aa[i]][bb[i]] = g[bb[i]][aa[i]] = 0; // 該当の辺だけ外す

    for (int j = 0; j < n; j++) {
      visited[j] = false;
    }

    dfs(0); //その状態で全ノードを探索

    bool brd = 0;
    for (int j = 0; j < n; j++) {
      if (!visited[j]) brd = true; // 一個でも未訪問なノードがある=最初に外した辺は橋
    }
    if (brd) ans++;

    g[aa[i]][bb[i]] = g[bb[i]][aa[i]] = 1; // 外した辺を元に戻す
  }

  cout << ans << endl;

  return 0;
}