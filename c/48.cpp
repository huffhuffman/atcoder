#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, x;
  cin >> n >> x;

  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  ll ans = 0;
  for (int i = 0; i <= n; i++) {
    if (x < a[i] + a[i - 1]) {
      int diff = (a[i] + a[i - 1]) - x;
      a[i] -= diff;
      ans += diff;
    }
  }

  cout << ans << endl;

  return 0;
}