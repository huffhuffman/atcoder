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

  ll t = c - a - b;

  string ans;
  if (t > 0 && 4 * a * b < t * t) {
    ans = "Yes";
  } else {
    ans = "No";
  }

  cout << ans << ln;

  return 0;
}