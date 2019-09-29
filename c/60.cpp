#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, t;
  cin >> n >> t;

  vector<ll> vt(n);
  for (int i = 0; i < n; i++) {
    cin >> vt.at(i);
  }

  ll ans = n * t;
  ll dup = 0;
  for (int i = 1; i < n; i++) {
    ll prev = vt.at(i - 1);
    ll curr = vt.at(i);

    if (curr - prev < t) {
      dup += t - (curr - prev);
    }
  }

  cout << ans - dup << endl;

  return 0;
}