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

  ll n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;
  a--;
  b--;
  c--;
  d--;
  string s;
  cin >> s;
  bool ok = true;
  bool spc = false;
  for (int i = b + 1; i <= d; i++) {
    if (s[i] == '#' && s[i - 1] == '#') {
      ok = false;
      break;
    }

    if(s[i] == '.' && s[i - 1] == '.' && s[i - 2] == '.') {
      spc = true;
    }
  }
  if (ok && !spc) {
    s[d] = '#';
  }

  for (int i = a + 1; i <= c; i++) {
    if (s[i] == '#' && s[i - 1] == '#') {
      ok = false;
      break;
    }
  }

  cout << (ok ? "Yes" : "No") << ln;

  return 0;
}