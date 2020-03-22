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

  string s;
  cin >> s;

  string r = s;
  reverse(all(r));

  int n = s.size();

  string ans = "No";
  if (s == r) {
    string z = s.substr(0, (n - 1) / 2);
    string zr = z;
    reverse(all(z));

    string k = s.substr((n + 3) / 2 - 1);
    string kr = k;
    reverse(all(k));

    if (z == zr && k == kr) {
      ans = "Yes";
    }
  }

  cout << ans << ln;

  return 0;
}