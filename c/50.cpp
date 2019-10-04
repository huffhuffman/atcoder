#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

ll mod = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> v(n, 0);
  for (int i = 0; i < n / 2; i++) {
    v[i] = n - (i * 2 + 1);
    v[n - 1 - i] = n - (i * 2 + 1);
  }

  vector<int> count(n, 0);
  for (int i = 0; i < n; i++) {
    int ai = a[i];

    count[ai]++;
  }

  for (int i = 0; i < n; i++) {
    int vv = v[i];

    if (i == n / 2 && n % 2 != 0) {
      if (count[vv] == 1) continue;
    }

    if (count[vv] == 2) continue;

    cout << 0 << endl;
    return 0;
  }

  ll ans = 2;
  for (int i = 1; i < n / 2; i++) {
    ans *= 2;
    ans %= mod;
  }

  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }

  cout << ans << endl;

  return 0;
}