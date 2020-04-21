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

  ll k, t;
  cin >> k >> t;
  ll ma = 0;
  for (int i = 0; i < t; i++) {
    ll a;
    cin >> a;

    if (a > ma) {
      ma = a;
    }
  }

  ll otrs = k - ma;

  ll ans = max(0ll, ma - otrs - 1);

  cout << ans << ln;

  return 0;
}