#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, h;
  cin >> n >> h;

  ll a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  ll ans = INT64_MAX;
  for (ll x = 0; x <= n; x++) {
    // y > ((n - x) * e - h - b * x) / (d + e) より
    // y = ((n - x) * e - h - b * x) / (d + e) より大きい最小の整数なので + 1
    ll y = ((n - x) * e - h - b * x);
    if (y < 0) {
      y = 0;
    } else {
      y = y / (d + e) + 1;
    }

    ll total = y > 0 && x + y <= n ? x * a + y * c : x * a;
    if (ans > total) {
      ans = total;
    }
  }

  cout << ans << endl;

  return 0;
}