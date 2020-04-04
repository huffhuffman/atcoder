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
  vector<ll> a(n);

  ll total = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    total += a[i];
  }

  ll cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] * 4 * m >= total) {
      cnt++;
    }
  }

  string ans = "No";
  if (cnt >= m) {
    ans = "Yes";
  }
  cout << ans << ln;

  return 0;
}