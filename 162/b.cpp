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

  ll ans = 0;
  for (ll i = 1; i <= n; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      continue;
    }

    ans += i;
  }

  cout << ans << ln;

  return 0;
}