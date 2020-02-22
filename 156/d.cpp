#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

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

ll superCOM(ll n, ll k) {
  ll res = finv[k] % MOD;
  for (ll i = 0; i < k; i++) {
    res *= (n - i) % MOD;
    res %= MOD;
  }

  return res % MOD;
}

ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res % mod * a % mod;
    a = a % mod * a % mod;
    n >>= 1;
    res %= mod;
  }
  return res;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, a, b;
  cin >> n >> a >> b;

  COMinit();

  ll ans = (modpow(2, n, MOD) - 1);

  ll acom = superCOM(n, a) % MOD;
  ll bcom = superCOM(n, b) % MOD;

  cout << (((ans + MOD) - acom % MOD) + MOD - bcom % MOD) % MOD << endl;

  return 0;
}