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

  ll n, m, x;
  cin >> n >> m >> x;

  vector<ll> c(n);
  vector<vector<ll>> a(n, vector<ll>(m));
  for (int i = 0; i < n; i++) {
    cin >> c[i];
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  ll ans = INF;
  for (int i = 0; i < (1 << n); i++) {
    bitset<12> b(i);
    vector<ll> s(m, 0);
    ll sum = 0;
    for (int j = 0; j < 12; j++) {
      if (b[j]) {
        sum += c[j];
        for (int y = 0; y < m; y++) {
          s[y] += a[j][y];
        }
      }
    }

    bool ok = true;
    for (int j = 0; j < m; j++) {
      if (s[j] < x) {
        ok = false;
        break;
      }
    }

    if (ok && ans > sum) {
      ans = sum;
    }
  }

  if (ans == INF) {
    ans = -1;
  }

  cout << ans << ln;

  return 0;
}