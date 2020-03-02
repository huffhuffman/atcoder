#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

const int MAX_N = 200000;

int par[MAX_N];
int rnk[MAX_N];

void init(int n) {
  for (int i = 0; i < n; i++) {
    par[i] = i;
    rnk[i] = 0;
  }
}

int find(int x) {
  if (par[x] == x) {
    return x;
  } else {
    return par[x] = find(par[x]);
  }
}

void unite(int x, int y) {
  x = find(x);
  y = find(y);
  if (x == y) return;

  if (rnk[x] < rnk[y]) {
    par[x] = y;
  } else {
    par[y] = x;
    if (rnk[x] == rnk[y]) rnk[x]++;
  }
}

bool same(int x, int y) { return find(x) == find(y); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m, k;
  cin >> n >> m >> k;

  vector<int> a(m), b(m), c(k), d(k), fr(n);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    fr[a[i]]++;
    fr[b[i]]++;
  }

  vector<vector<int>> edge(n);
  for (int i = 0; i < k; i++) {
    cin >> c[i] >> d[i];
    c[i]--;
    d[i]--;
    edge[c[i]].push_back(d[i]);
    edge[d[i]].push_back(c[i]);
  }

  init(n);
  for (int i = 0; i < m; i++) {
    unite(a[i], b[i]);
  }

  vector<int> size(n);
  for (int i = 0; i < n; i++) {
    size[find(i)]++;
  }

  for (int i = 0; i < n; i++) {
    int ans = size[find(i)] - 1 - fr[i];

    for (auto j : edge[i]) {
      if(same(i, j)) ans--;
    }

    cout << ans << endl;
  }

  return 0;
}