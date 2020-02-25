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

  int w;
  cin >> w;

  string ans = "";
  for (int i = 0; i < s.size(); i += w) {
    ans += s[i];
  }

  cout << ans << ln;

  return 0;
}