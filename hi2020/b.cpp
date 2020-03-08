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

  int a, b, m;
  cin >> a >> b >> m;
  vector<int> av(a), bv(b), x(m), y(m), c(m);
  for (int i = 0; i < a; i++) {
    cin >> av[i];
  }
  for (int i = 0; i < b; i++) {
    cin >> bv[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> x[i] >> y[i] >> c[i];
    x[i]--;
    y[i]--;
  }

  ll ans =
      *min_element(av.begin(), av.end()) + *min_element(bv.begin(), bv.end());

  for (int i = 0; i < m; i++) {
    ll tmp = av[x[i]] + bv[y[i]] - c[i];

    if (ans > tmp) {
      ans = tmp;
    }
  }

  cout << ans << endl;

  return 0;
}