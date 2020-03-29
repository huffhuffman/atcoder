#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

vector<vector<P>> g(200000);
vector<int> ans(200000, 0), visit(200000, 0);

void dfs(int v, bool color) {
  visit[v] = 1;
  for (auto cp : g[v]) {
    int c = cp.first;
    int d = cp.second;

    // 探索済みならすきっぷ
    if (visit[c] > 0) continue;

    bool ceven = d % 2 == 0;

    bool next = ceven ? color : !color;

    ans[c] = next;
    dfs(c, next);
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> u(n), v(n), w(n);
  for (int i = 0; i < n - 1; i++) {
    cin >> u[i] >> v[i] >> w[i];
    u[i]--;
    v[i]--;
    g[u[i]].push_back(P(v[i], w[i]));
    g[v[i]].push_back(P(u[i], w[i]));
  }

  int root = u[0];

  dfs(root, 0);

  for (int i = 0; i < n; i++) {
    cout << ans[i] << ln;
  }

  return 0;
}