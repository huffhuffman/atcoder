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
  vector<ll> a(n);
  map<ll, ll> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m[a[i]]++;
  }

  string ans = "No";
  if (m.size() > 3) {
    ans = "No";
  } else if (m.size() == 3) {
    bool ok = true;
    ll t = 0;
    for (auto p : m) {
      ll v = p.first;
      ll cnt = p.second;
      if (cnt != n / 3) {
        ok = false;
        break;
      }
      t ^= v;
    }

    if (t != 0) {
      ok = false;
    }

    ans = ok ? "Yes" : "No";
  } else if (m.size() == 2) {
    ans = m[0] == n / 3 ? "Yes" : "No";
  } else {
    ans = m.find(0) != m.end() ? "Yes" : "No";
  }

  cout << ans << ln;

  return 0;
}