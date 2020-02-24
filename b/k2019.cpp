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

  string key = "keyence";

  int len = s.size();

  string ans = "NO";
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - i; j++) {
      string copy = s;
      copy.erase(i, j);

      if (copy == key) {
        ans = "YES";
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}