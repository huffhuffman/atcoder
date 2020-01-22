#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

vector<int> getPrimeFactors(int n) {
  vector<int> p(n + 1, 0);

  if (n == 0) return p;

  p.at(1) = 1;

  int num = n;
  for (int i = 2; i * i <= n; i++) {
    while (num % i == 0) {
      num /= i;
      p.at(i)++;
    }

    if (num == 1) break;
  }

  if (num != 1) p.at(num)++;

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
  ll p2 = mod - 2;
  return modpow(a, p2, mod);
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll invA = modinv(4, MOD) % MOD;

  cout << 12 % MOD * invA % MOD << endl;

  return 0;
}