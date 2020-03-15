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

  ll h, w;
  cin >> h >> w;

  ll ans = (h * w + 1) / 2;

  if (h == 1 || w == 1) {
    ans = 1;
  }

  cout << ans << ln;

  return 0;
}