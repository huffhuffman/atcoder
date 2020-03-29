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

  ll x;
  cin >> x;

  ll ans = (x / 500) * 1000;
  ll nokori = x % 500;
  ans += (nokori / 5) * 5;

  cout << ans << ln;

  return 0;
}