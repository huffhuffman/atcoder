#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int n, A, B, C;
vector<int> l(10);

int dfs(int a, int b, int c, int i) {
  if (i == n) {
    return min({a, b, c}) > 0 ? abs(a - A) + abs(b - B) + abs(c - C) : INF;
  }

  int r0 = dfs(a, b, c, i + 1);
  int r1 = dfs(a + l[i], b, c, i + 1) + 10; // 最初の一本目は合成コストとかないのでほんとは0、なのであとでまとめて引く
  int r2 = dfs(a, b + l[i], c, i + 1) + 10;
  int r3 = dfs(a, b, c + l[i], i + 1) + 10;

  return min({r0, r1, r2, r3});
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> n >> A >> B >> C;
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }

  // 最初に選んだ竹は合成コストないのでその分-30している
  cout << dfs(0, 0, 0, 0) - 30 << ln;

  return 0;
}