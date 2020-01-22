#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

map<ll, ll> getPrimeFactors(int n) {
  map<ll, ll> p;

  if (n == 0) return p;

  p[1] = 1;

  int num = n;
  for (int i = 2; i * i <= n; i++) {
    while (num % i == 0) {
      num /= i;
      p[i]++;
    }

    if (num == 1) break;
  }

  if (num != 1) p[num]++;

  return p;
}

ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

ll modinv(ll a, ll mod) {
    return modpow(a, mod - 2, mod);
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  map<ll, ll> lcmP;
  for (int k = 0; k < n; k++) {
    map<ll, ll> primes = getPrimeFactors(a[k]);

    for (auto p : primes) {
      lcmP[p.first] = max(lcmP[p.first], p.second);
    }
  }

  ll lcmNum = 1;
  for (auto lp : lcmP) {
    lcmNum *= modpow(lp.first, lp.second, MOD);
    lcmNum %= MOD;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += lcmNum * modinv(a[i], MOD) % MOD;
    ans %= MOD; 
  }

  cout << ans << endl;

  return 0;
}