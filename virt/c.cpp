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

  int n, m;
  cin >> n >> m;
  vector<int> s(m), c(m);
  for (int i = 0; i < m; i++) {
    cin >> s[i] >> c[i];
    s[i]--;
  }

  int ans = -1;

  for (int i = 0; i <= 10000; i++) {
    string snum = to_string(i);
    if (snum.size() != n) continue;

    bool ok = true;
    for (int j = 0; j < m; j++) {
      if ((snum[s[j]] - '0') != c[j]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      ans = i;
      break;
    }
  }

  cout << ans << ln;

  return 0;
}