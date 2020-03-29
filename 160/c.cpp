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

  int k, n;
  cin >> k >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  a.push_back(k + a[0]);

  vector<ll> diffs;
  for (int i = 1; i < a.size(); i++) {
    ll diff = a[i] - a[i - 1];
    diffs.push_back(diff);
  }

  sort(all(diffs));
  reverse(all(diffs));

  ll ans = 0;
  for (int i = 0; i < diffs.size(); i++) {
    if (n > 2 && i == 0) continue;
    ans += diffs[i];
  }

  cout << ans << ln;
  return 0;
}