#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll a, k;
  cin >> a >> k;

  ll ans = 0;
  if (k == 0) {
    ans = 2 * pow(10, 12) - a;
  } else {
    ll t = a;

    while (t < 2 * pow(10, 12)) {
      ll prev = t;

      t += prev * k + 1;
      ans++;
    }
  }

  cout << ans << ln;

  return 0;
}