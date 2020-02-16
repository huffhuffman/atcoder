#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int n = s.size() + 1;

  vector<int> l(n), r(n), v(n);
  for (int i = 0; i < n; i++) {
    if (s[i] == '<') {
      l[i + 1] = l[i] + 1;
    }
  }

  for (int i = n - 2; i >= 0; i--) {
    if (s[i] == '>') {
      r[i] = r[i + 1] + 1;
    }
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += max(l[i], r[i]);
  }

  cout << ans << endl;

  return 0;
}