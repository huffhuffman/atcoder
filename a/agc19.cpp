#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  double q, h;
  ll s, d, n;
  cin >> q >> h >> s >> d >> n;

  ll ans = 0;
  ll qq = q * 4;
  ll hh = h * 2;
  ll v = min({qq, hh, s});

  ans = min(n * v, (n / 2) * d + (n % 2) * v) ;

  cout << ans << ln;

  return 0;
}