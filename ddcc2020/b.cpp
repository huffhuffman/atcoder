#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<ll> suml(n, 0);
  suml[0] = a[0];
  for (int i = 1; i < n; i++) {
    suml[i] = suml[i - 1] + a[i];
  }

  ll total = suml[n - 1];

  ll ans = -1;
  for (int i = 0; i < n - 1; i++) {
    ll l = suml[i];
    ll r = total - suml[i];

    ll d = abs(l - r);

    if (ans == -1) {
      ans = d;
    } else {
      ans = min(ans, d);
    }
  }

  cout << ans << endl;

  return 0;
}