#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll x2 = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      x2 += a[i];
    } else {
      x2 -= a[i];
    }
  }

  vector<int> ans(n);
  ans[0] = x2 / 2;
  for (int i = 0; i < n - 1; i++) {
    ans[i + 1] = a[i] - ans[i];
  }
  for (int i = 0; i < n; i++) {
    ans[i] *= 2;
    cout << ans[i] << endl;
  }

  return 0;
}