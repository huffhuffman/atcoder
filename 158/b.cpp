#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, a, b;
  cin >> n >> a >> b;

  ll cnt = n / (a + b);

  ll ans = cnt * a;

  ll rest = n - cnt * (a + b);

  ans += min(rest, a);

  cout << ans << endl;

  return 0;
}