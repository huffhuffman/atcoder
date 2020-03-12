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

  // 重みつきグラフ（iからjへのコスト）
  int g[10][10];
  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      cin >> g[i][j];
    }
  }

  // ワーシャルフロイド
  // 全頂点間の最短距離を求める
  for (int k = 0; k < 10; k++) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        // iからjへのコストより、iからkを経由してjにいくコストの方が低いなら最短コストを更新
        if (g[i][j] > g[i][k] + g[k][j]) {
          g[i][j] = g[i][k] + g[k][j];
        }
      }
    }
  }

  return 0;
}