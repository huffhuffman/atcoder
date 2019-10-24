#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
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
    ll aCount = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    ll cCount = c.end() - upper_bound(c.begin(), c.end(), b[i]);

    ans += aCount * cCount;
  }

  cout << ans << endl;

  return 0;
}
