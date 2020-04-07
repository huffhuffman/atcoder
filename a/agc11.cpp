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

  ll n, c, k;
  cin >> n >> c >> k;
  vector<ll> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  sort(all(t));
  ll cnt = 0;
  ll tlim = -1;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if(cnt < c && t[i] <= tlim) {
      cnt++;
    } else {
      ans++;
      cnt = 1;
      tlim = t[i] + k;
    }
  }

  cout << ans << ln;

  return 0;
}