#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n), b(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll num = b[i];

    auto ait = lower_bound(a.begin(), a.end(), num);
    ll acnt = distance(a.begin(), ait);

    auto cit = upper_bound(c.begin(), c.end(), num);
    ll ccnt = n - distance(c.begin(), cit);

    ans += acnt * ccnt;
  }

  cout << ans << endl;

  return 0;
}