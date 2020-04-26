#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  ll n = s.size();

  reverse(all(s));

  map<ll, ll> mp;
  mp[0] = 1;

  ll cnt = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    cnt += modpow(10, i, 2019) * (s[i] - '0');
    cnt %= 2019;

    ans += mp[cnt];
    mp[cnt]++;
  }

  cout << ans << ln;

  return 0;
}
