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

  ll a, v, b, w, t;
  cin >> a >> v >> b >> w >> t;

  string ans = "NO";

  b = abs(a - b);
  a = 0;

  if (a + v * t >= b + w * t) {
    ans = "YES";
  }

  cout << ans << ln;

  return 0;
}