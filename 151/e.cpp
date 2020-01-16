#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

// nCk mod p (mod対応版nCk)
/* ここから */
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

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  COMinit();

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll now = COM(i, k - 1);
    ans += a[i] * now % MOD;
  }

  reverse(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    ll now = COM(i, k - 1);
    ans -= a[i] * now % MOD;
  }

  cout << ans % MOD << endl;

  return 0;
}