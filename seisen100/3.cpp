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

  regex re(R"([ACGT]+)");

  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    smatch m;
    string sub = s.substr(i);
    regex_search(sub, m, re);

    int len = m.str().size();

    ans = max(ans, len);
  }

  cout << ans << endl;

  return 0;
}