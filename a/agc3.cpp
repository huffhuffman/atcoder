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

  string s;
  cin >> s;

  map<char, int> m = {
      make_pair('S', 0),
      make_pair('N', 0),
      make_pair('E', 0),
      make_pair('W', 0),
  };

  for (int i = 0; i < s.size(); i++) {
    m[s[i]]++;
  }

  string ans = "Yes";
  if (m['S'] > 0 || m['N'] > 0) {
    if (m['S'] == 0 || m['N'] == 0) {
      ans = "No";
    }
  }

  if (m['W'] > 0 || m['E'] > 0) {
    if (m['W'] == 0 || m['E'] == 0) {
      ans = "No";
    }
  }

  cout << ans << endl;

  return 0;
}