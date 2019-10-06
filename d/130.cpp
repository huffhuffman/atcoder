#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  ll k;
  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll sum = 0;
  int r = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    while (r < n && sum + a[r] < k) {
      sum += a[r];
      ++r;
    }

    ans += r - i;
    sum -= a[i];
  }

  ans = (ll)n * (n + 1) / 2 - ans;

  cout << ans << endl;

  return 0;
}