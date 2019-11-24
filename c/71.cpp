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
  map<ll, ll> mp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];

    mp[a[i]]++;
  }

  ll ans = 1;
  int c = 0;

  sort(a.rbegin(), a.rend());
  for (int i = 0; i < n; i++) {
    if (mp[a[i]] >= 2) {
      mp[a[i]] -= 2;
      ans *= a[i];
      c++;
    }

    if (c == 2) {
      break;
    }
  }

  if (c < 2) {
    ans = 0;
  }

  cout << ans << endl;

  return 0;
}