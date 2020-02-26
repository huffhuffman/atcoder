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

  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  ll total = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    total += a[i];
  }

  int ans = 0;

  if (total < x) {
    ans = n - 1;
  } else {
    sort(a.begin(), a.end());
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      if (sum + a[i] <= x) {
        sum += a[i];
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}