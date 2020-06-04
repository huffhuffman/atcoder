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

  ll h1, m1, h2, m2, k;
  cin >> h1 >> m1 >> h2 >> m2 >> k;

  ll t1 = h1 * 60 + m1;
  ll t2 = h2 * 60 + m2;

  ll ans = t2 - t1 - k;

  cout << ans << ln;

  return 0;
}