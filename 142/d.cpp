#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll a, b;
  cin >> a >> b;

  ll g = __gcd(a, b);

  ll ans = 1;

  for (ll i = 2; i * i <= g; i++) {
    if (g % i == 0) {
      ans++;
      while (g % i == 0) g /= i;
    }
  }
  if (g != 1) ans++;

  cout << ans << endl;

  return 0;
}
