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

  regex re(R"(^A?KIHA?BA?RA?$)");
  smatch m;

  string ans = "NO";
  if (regex_match(s, m, re)) {
    ans = "YES";
  }

  cout << ans << ln;

  return 0;
}