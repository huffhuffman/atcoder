#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n), t(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> t[i];
  }

  ll A = 1, B = 1;
  for (int i = 0; i < n; i++) {
    int x = a[i];
    int y = t[i];

    ll num = max((A + x - 1) / x, (B + y - 1) / y);

    A = num * x;
    B = num * y;
  }

  ll ans = A + B;

  cout << ans << endl;

  return 0;
}