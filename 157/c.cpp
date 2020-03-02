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

  int n, m;
  cin >> n >> m;

  vector<int> s(m), c(m);
  string ans = "-1";

  for (int i = 0; i < m; i++) {
    cin >> s[i] >> c[i];
    s[i]--;

    if (s[i] == 0 && c[i] == 0) {
      ans = "-1";
    }
  }

  for (int i = 0; i < m; i++) {
    int k = s[i];
    int v = c[i];
    for (int j = 0; j < m; j++) {
      if (i == j) continue;
      int k2 = s[j];
      int v2 = c[j];

      if (k == k2 && v2 != v) {
        ans = "-1";
        break;
      }
    }
  }

  for (int num = 0; num < 1000; num++) {
    string ns = to_string(num);
    int keta = ns.size();

    if (keta != n) continue;

    bool ok = true;
    for (int i = 0; i < m; i++) {
      if (ns[s[i]] - '0' != c[i]) {
        ok = false;
      }
    }

    if (ok) {
      ans = ns;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}