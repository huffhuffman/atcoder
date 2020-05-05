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

  ll n, m;
  cin >> n >> m;

  vector<ll> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<ll> a(m), b(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }

  vector<bool> t(n, true);
  for (int i = 0; i < m; i++) {
    if (h[a[i]] > h[b[i]]) {
      t[b[i]] = false;
    } else if (h[a[i]] < h[b[i]]) {
      t[a[i]] = false;
    } else if (h[a[i]] == h[b[i]]) {
      t[b[i]] = false;
      t[a[i]] = false;
    }
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (t[i]) {
      ans++;
      // cout << i << ln;
    }
  }

  cout << ans << ln;

  return 0;
}