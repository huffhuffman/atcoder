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

  ll x, n;
  cin >> x >> n;
  vector<ll> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  ll ans = x;
  for (int absn = 0; absn < 1000; absn++) {
    ll a = x + absn;
    ll b = x - absn;
    bool af = false;
    bool bf = false;
    for (int i = 0; i < n; i++) {
      if (p[i] == a) {
        af = true;
      }
      if (p[i] == b) {
        bf = true;
      }
    }
    if (!af && !bf) {
      ans = b;
      break;
    } else if (!bf) {
      ans = b;
      break;
    } else if (!af) {
      ans = a;
      break;
    }
  }

  cout << ans << ln;

  return 0;
}