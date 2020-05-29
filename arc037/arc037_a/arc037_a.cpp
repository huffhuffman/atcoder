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
  vector<ll> m(n);
  for (int i = 0; i < n; i++) {
    cin >> m[i];
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (m[i] < 80) {
      ans += 80 - m[i];
    }
  }

  cout << ans << ln;

  return 0;
}