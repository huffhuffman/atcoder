#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int MOD = 1000000007;


ll modpow(ll num, ll pow, ll mod) {
  if (pow == 0) {
    return 1;
  }

  if (pow % 2 == 0) {
    ll res = modpow(num, pow / 2, mod);

    return res * res % mod;
  }

  return num * modpow(num, pow - 1, mod);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, p;
  cin >> n >> p;

  cout << modpow(n, p, MOD) << endl;

  return 0;
}