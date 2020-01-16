#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m, x, y;
  cin >> n >> m >> x >> y;
  vector<int> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  ll time = 0;

  ll ans = 0;
  while (1) {
    auto ita = lower_bound(a.begin(), a.end(), time);
    if (ita != a.end()) {
      time = x + *ita;
    } else {
      break;
    }

    auto itb = lower_bound(b.begin(), b.end(), time);
    if (itb != b.end()) {
      time = y + *itb;
      ans++;
      continue;
    }

    break;
  }

  cout << ans << endl;

  return 0;
}