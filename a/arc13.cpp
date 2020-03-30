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

  int n, m, l, p, q, r;
  cin >> n >> m >> l >> p >> q >> r;

  int ans = 0;
  vector<int> a = {p, q, r};
  sort(all(a));
  do {
    int t = (n / a[0]) * (m / a[1]) * (l / a[2]);

    if (ans < t) {
      ans = t;
    }
  } while (next_permutation(all(a)));

  cout << ans << ln;

  return 0;
}