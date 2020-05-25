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
  getline(cin, s);

  vector<string> vs;
  string t = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ') {
      vs.push_back(t);
      t = "";
      continue;
    }

    t += s[i];
  }
  vs.push_back(t);

  for (int i = 0; i < vs.size(); i++) {
    string ans = "A";
    if (vs[i] == "Left") {
      ans = "<";
    } else if (vs[i] == "Right") {
      ans = ">";
    }

    cout << ans;
    if (i < vs.size() - 1) {
      cout << " ";
    }
  }

  cout << ln;

  return 0;
}