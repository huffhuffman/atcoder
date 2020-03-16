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

  ll a, b;
  cin >> a >> b;

  ll ans = -1;
  for (int i = 1; i <= 2000000; i++) {
    ll na = i * 0.08;
    ll nb = i * 0.1;
    if (na == a && nb == b) {
      ans = i;
      break;
    }
  }

  cout << ans << ln;
  return 0;
}