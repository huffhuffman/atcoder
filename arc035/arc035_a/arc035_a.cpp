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

  string r = s;
  reverse(all(s));

  string ans = "YES";
  for (int i = 0; i < s.size() / 2; i++) {
    if (s[i] == r[i]) {
      continue;
    } else if (s[i] == '*' || r[i] == '*') {
      continue;
    }

    ans = "NO";
    break;
  }

  cout << ans << ln;

  return 0;
}