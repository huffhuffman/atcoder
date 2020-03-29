#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, x, y;
  cin >> n >> x >> y;
  x--;
  y--;

  vector<vector<int>> g(n, vector<int>(n, INF));

  // ワーシャルフロイド
  // 全頂点間の最短距離を求める
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // iからjへのコストより、iからkを経由してjにいくコストの方が低いなら最短コストを更新
      if (i < j) {
        g[i][j] = min((int)abs(j - i), (int)(abs(x - i) + abs(y - j) + 1));
      }
    }
  }

  vector<int> ans(n + 1, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i >= j) continue;
      int cost = g[i][j];

      ans[cost]++;
    }
  }

  for (int i = 1; i < n; i++) {
    cout << ans[i] << ln;
  }

  return 0;
}
