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

  ll a, b, c, k;
  cin >> a >> b >> c >> k;

  ll ans = 0;
  if (a >= k) {
    ans = k;
  } else {
    ans = a;
    k -= a;

    if (b < k) {
      k -= b;
      ans -= k;
    }
  }

  cout << ans << ln;

  return 0;
}