#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;

  ll ans;
  if (k % 2 != 0) {
    ll x = n / k;
    ans = x * x * x;
  } else {
    k /= 2;
    ll x = (n + k) / k / 2;
    ll x2 = n / k / 2;
    ans = x * x * x + x2 * x2 * x2;
  }

  cout << ans << endl;

  return 0;
}