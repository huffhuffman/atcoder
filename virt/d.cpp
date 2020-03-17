#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

struct UnionFind {
  // d[i] = 頂点番号iの親（の番号）
  // マイナスなら根（かつ、サイズ * -1 を示す（そうすると配列一つですむ））
  vector<int> d;

  // コンストラクタ
  // 頂点n個で初期化。最初は全部に根するので-1
  UnionFind(int n = 0) : d(n, -1) {}

  // 親の番号を返す
  int find(int x) {
    if (d[x] < 0) return x;  // 根ならそのまま頂点番号返す

    return d[x] = find(
               d[x]);  // 根じゃないなら親を返す（かつ計算量を削減のためメモ化する）
  }

  // 木と木をくっつける
  bool unite(int x, int y) {
    x = find(x);  // xの親の番号
    y = find(y);  // yの親の番号

    if (x == y) return false;  // 親が同じなら何もする必要はない

    // x のほうがサイズを大きくしたい
    if (-d[x] < -d[y]) swap(x, y);  // （*-1のサイズなので注意）

    // 小さいほうの木（y）を大きい方（x）にくっつける
    d[x] += d[y];
    d[y] = x;

    return true;
  }

  // 同じグループか
  bool same(int x, int y) { return find(x) == find(y); }

  // 頂点xのサイズ
  int size(int x) { return -d[find(x)]; }
};

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m, k;
  cin >> n >> m >> k;

  UnionFind uf(n);

  vector<int> a(m), b(m), f(n, 0);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    uf.unite(a[i], b[i]);
    f[a[i]]++;
    f[b[i]]++;
  }

  vector<int> c(k), d(k);

  vector<vector<int>> blk(n);
  for (int i = 0; i < k; i++) {
    cin >> c[i] >> d[i];
    c[i]--;
    d[i]--;
    blk[c[i]].push_back(d[i]);
    blk[d[i]].push_back(c[i]);
  }

  for (int i = 0; i < n; i++) {
    int p = uf.find(i);
    int total = uf.size(p) - 1;
    total -= f[i];

    for (auto bk : blk[i]) {
      if(uf.same(i, bk)) {
        total--;
      }
    }

    cout<<total<<ln;
  }

  return 0;
}