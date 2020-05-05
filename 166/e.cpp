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

  ll n;
  cin >> n;

  vector<ll> a(n), l(n), r(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (ll i = 0; i < n; i++) {
    ll idx = a[i] + i;
    if (idx < n) {
      l[idx]++;
    }
  }

  for (ll i = n - 1; i >= 0; i--) {
    ll idx = i - a[i];
    if (idx >= 0) {
      r[idx]++;
    }
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += l[i] * r[i];
  }

  cout << ans << ln;

  return 0;
}