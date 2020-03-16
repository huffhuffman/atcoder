#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll a, b, c;
  cin >> a >> b >> c;

  ll ans = 0;
  if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
    ans = 0;
  } else {
    // evenが一個もない
    ll m = max({a, b, c});
    ll l = m / 2;
    ll r = m - l;

    vector<ll> arr = {a, b, c};
    sort(all(arr));

    l *= arr[0] * arr[1];
    r *= arr[0] * arr[1];

    ans = abs(l - r);
  }

  cout << ans << ln;

  return 0;
}