#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll ans = INF;
  for (int i = 0; i < n; i++) {
    ll num = a[i];
    ll cnt = 0;
    while (num % 2 == 0) {
      num /= 2;
      cnt++;
    }
    if (ans > cnt) {
      ans = cnt;
    }
  }

  cout << ans << ln;

  return 0;
}