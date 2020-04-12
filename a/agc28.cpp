#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

// lcm
ll lcm(ll x, ll y) { return (x * y) / __gcd(x, y); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;

  ll l = lcm(n, m);
  ll g = __gcd(n, m);

  bool ok = true;
  for (int i = 0; i < g; i++) {
    if (s[i * (n / g)] != t[i * m / g]) {
      ok = false;
      break;
    }
  }

  cout << (ok ? l : -1) << ln;

  return 0;
}