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

  ll m = n - 2;
  ll ans = m * b - m * a;
  if (ans < 0) {
    ans = 0;
  } else {
    ans++;
  }

  cout << ans << endl;

  return 0;
}