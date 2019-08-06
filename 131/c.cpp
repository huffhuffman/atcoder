#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll c, ll d) { return c / __gcd(c, d) * d; }

ll f(ll x, int c, int d) {
  ll res = x;
  res -= x / c;  // 全体からcで割り切れる数をひく = cで割り切れない数
  res -= x / d;  // 全体からdで割り切れる数をひく = dで割り切れない数

  // 全体から重複して引いた数を足し戻す（cとdの最小公倍数の倍数の数）
  res += x / lcm(c, d);

  return res;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll a, b;
  int c, d;
  cin >> a >> b >> c >> d;

  ll ans = f(b, c, d) - f(a - 1, c, d);

  cout << ans << endl;

  return 0;
}