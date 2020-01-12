
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

ll gcd(ll a, ll b) {
  if (b == 0) return a;

  if (a < b) return gcd(b, a);

  return gcd(b, a % b);
}

ll lcm(ll x, ll y) { return (x * y) / gcd(x, y); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  bool ok = true;
  for (int i = 1; i < n; i++) {
    int cntX = 0, cntY = 0;

    int x = a[i];
    int y = a[i - 1];
    while (x % 2 == 0) {
      x /= 2;
      cntX++;
    }

    while (y % 2 == 0) {
      y /= 2;
      cntY++;
    }

    if (cntX != cntY) {
      ok = false;
      break;
    }
  }

  ll vlcm = a[0] / 2;
  for (int i = 1; i < n; i++) {
    a[i] /= 2;
    vlcm = lcm(a[i], vlcm);
    if(vlcm > m) {
      ok = false;
      break;
    }
  }

  ll ans = 0;

  if (ok) {
    ll mul = 1;
    while (vlcm * mul <= m) {
      ans++;
      mul += 2;
    }

    cout << ans << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
