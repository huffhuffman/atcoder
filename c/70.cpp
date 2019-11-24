#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

// gcd ビルトインで__gcdがあるけど、それが使えないとき用
ll gcd(ll a, ll b) {
  if (b == 0) return a;

  if (a < b) return gcd(b, a);

  return gcd(b, a % b);
}

// lcm
ll lcm(ll x, ll y) {
  ll gcdn = gcd(x, y);
  return (x / gcdn) * y;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<ll> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  ll ans = t[0];
  for (int i = 0; i < n; i++) {
    ans = lcm(ans, t[i]);
  }

  cout << ans << endl;

  return 0;
}