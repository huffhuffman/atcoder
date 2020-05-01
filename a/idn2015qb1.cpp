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

  ll x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  ll ans = abs(x2 - x1) + abs(y2 - y1) + 1;

  cout << ans << ln;

  return 0;
}