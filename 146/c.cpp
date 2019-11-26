#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

ll getDigit(ll num) {
  ll digit = 0;
  while (num != 0) {
    num /= 10;
    digit++;
  }
  return digit;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll a, b, x;
  cin >> a >> b >> x;

  ll xd = getDigit(x);

  ll ans = 0;
  for (int i = xd; i > 0; i--) {
    ll t = x - (i * b);
    ll ta = t / a;
    ll tad = getDigit(ta);

    if (tad <= i) {
      ans = ceil(t / a);
    }
  }

  if(ans > 1000000000) {
    ans = 1000000000;
  }

  cout << ans << endl;

  return 0;
}