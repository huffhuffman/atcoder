#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll h, w;
  cin >> h >> w;

  ll ans = 1000000000;
  if (h % 3 == 0 || w % 3 == 0) {
    ans = 0;
    cout << ans << endl;
    return 0;
  }

  for (int hi = 1; hi < h; hi++) {
    int rest = h - hi;

    ll a, b, c;
    a = hi * w;

    if (rest % 2 == 0) {
      b = rest / 2 * w;
      c = rest / 2 * w;
    } else {
      b = rest / 2 * w;
      c = (rest - rest / 2) * w;
    }

    ll maxx = max(a, max(b, c));
    ll minn = min(a, min(b, c));
    ll diff = maxx - minn;

    ans = min(ans, diff);

    if (w % 2 == 0) {
      b = w / 2 * rest;
      c = w / 2 * rest;
    } else {
      b = w / 2 * rest;
      c = (w - w / 2) * rest;
    }

    maxx = max(a, max(b, c));
    minn = min(a, min(b, c));
    diff = maxx - minn;

    ans = min(ans, diff);
  }

  swap(h, w);
  for (int hi = 1; hi < h; hi++) {
    int rest = h - hi;

    ll a, b, c;
    a = hi * w;

    if (rest % 2 == 0) {
      b = rest / 2 * w;
      c = rest / 2 * w;
    } else {
      b = rest / 2 * w;
      c = (rest - rest / 2) * w;
    }

    ll maxx = max(a, max(b, c));
    ll minn = min(a, min(b, c));
    ll diff = maxx - minn;

    ans = min(ans, diff);

    if (w % 2 == 0) {
      b = w / 2 * rest;
      c = w / 2 * rest;
    } else {
      b = w / 2 * rest;
      c = (w - w / 2) * rest;
    }

    maxx = max(a, max(b, c));
    minn = min(a, min(b, c));
    diff = maxx - minn;

    ans = min(ans, diff);
  }

  cout << ans << endl;

  return 0;
}