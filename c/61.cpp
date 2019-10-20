#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;

  vector<P> v(n);
  for (int i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;

    P ab(a, b);
    v[i] = ab;
  }

  sort(v.begin(), v.end());

  ll ans = -1;
  for (int i = 0; i < n; i++) {
    ll a = v[i].first;
    ll b = v[i].second;

    k -= b;

    if (k > 0) {
      continue;
    } else {
      ans = a;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}