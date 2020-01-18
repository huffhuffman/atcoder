#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

const int MAX =
    2000000;  // 問題によって変更する(パスカルの三角形の段数、nCkのnの最大)
ll fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++) {
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
  }
}

// 二項係数計算
ll COM(int n, int k) {
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int w, h;
  cin >> w >> h;
  w--;
  h--;

  int n = w + h;
  int k = h;

  COMinit();

  ll ans = COM(n, k);

  cout << ans << endl;

  return 0;
}