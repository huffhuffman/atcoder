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

  ll k, a, b;
  cin >> k >> a >> b;

  ll ans = 1;
  ll ansb = 1;

  ll t = k - (a - 1) - 2;
  if (t >= 0) {
    ans = b;
    if (a < b) {
      ans += (t / 2) * (b - a);
      ans += t % 2;
    }
  }

  ansb += k;

  cout << max(ans, ansb) << ln;

  return 0;
}