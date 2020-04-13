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
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  reverse(all(a));
  reverse(all(b));
  ll prev = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll curr = a[i] + prev;
    curr %= b[i];
    ll add = curr == 0 ? 0 : b[i] - curr;
    ans += add;
    prev += add;
  }

  cout << ans << ln;

  return 0;
}
