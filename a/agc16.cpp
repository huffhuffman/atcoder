#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
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

  int ans = INF;
  for (char c = 'a'; c <= 'z'; c++) {
    string ss = s;
    int cnt = 0;
    while (ss.size() > 1) {
      cnt++;

      string ns = "";
      for (int i = 0; i < ss.size() - 1; i++) {
        if (ss[i] == c) {
          ns += c;
        } else {
          ns += ss[i + 1];
        }
      }

      ss = ns;

      bool ok = true;
      for (int i = 0; i < ss.size(); i++) {
        if (ss[i] != c) {
          ok = false;
        }
      }

      if (ok) {
        break;
      }
    }

    ans = min(ans, cnt);
  }

  set<char> t;
  for (int i = 0; i < s.size(); i++) {
    t.insert(s[i]);
  }

  if (t.size() == 1) {
    ans = 0;
  }

  cout << ans << ln;

  return 0;
}
