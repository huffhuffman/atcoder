#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

struct Edge {
  int to, id;
};

vector<vector<Edge>> g;
vector<int> ans;

// v: ノード, p: 親, u: 子
void dfs(int v, int c = -1, int p = -1) {
  int k = 1;
  for (auto e : g[v]) {
    int u = e.to;
    int ei = e.id;
    if (u == p) continue;  // 親はみない
    if (k == c) k++;
    ans[ei] = k;
    k++;
    dfs(u, ans[ei], v);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  g.resize(n);
  ans = vector<int>(n - 1);
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    --a;
    --b;

    g[a].push_back((Edge){b, i});
    g[b].push_back((Edge){a, i});
  }

  dfs(0);

  int k = 0;
  for (int i = 0; i < n; i++) {
    k = max(k, int(g[i].size()));
  }
  cout << k << endl;

  for (int i = 0; i < n - 1; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}