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

  ll n, m, k;
  cin >> n >> m >> k;

  string ans = "No";
  for (ll a = 0; a <= m; a++) {
    for (ll b = 0; b <= n; b++) {
      ll val = a * (n - b) + b * (m - a);

      if (val == k) {
        ans = "Yes";
      }
    }
  }

  cout << ans << ln;

  return 0;
}
