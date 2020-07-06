#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

ll f(double y, double m, double d) {
  return 365 * y + floor(y / 4) - floor(y / 100) + floor(y / 400) +
         floor(306 * (m + 1) / 10) + d - 429;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll y, m, d;
  cin >> y >> m >> d;

  if (m == 1) {
    y--;
    m = 13;
  } else if (m == 2) {
    y--;
    m = 14;
  }

  ll l = f(y, m, d);
  ll r = f(2014, 5, 17);

  ll ans = r - l;
  cout << ans << ln;

  return 0;
}