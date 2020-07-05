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

  ll ans = n / 10 * 100;
  ll rem = n % 10;

  if (rem * 15 > 100) {
    ans += 100;
  } else {
    ans += rem * 15;
  }

  cout << ans << ln;

  return 0;
}