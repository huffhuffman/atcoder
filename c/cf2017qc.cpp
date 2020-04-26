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

  ll x = count(all(s), 'x');

  string r = s;
  reverse(all(r));

  ll ans = -1;

  string ns = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != 'x') {
      ns += s[i];
    }
  }

  string rs = ns;
  reverse(all(rs));

  if (ns == rs) {
    ll len = (ns.size() + 1) / 2;
    vector<ll> cf(len), cb(len);

    int cfi = 0;
    for (int j = 0; j < s.size(); j++) {
      if (cfi >= len) break;
      if (s[j] == 'x') {
        cf[cfi]++;
      } else {
        cfi++;
      }
    }

    int cbi = 0;
    for (int j = s.size() - 1; j >= 0; j--) {
      if (cbi >= len) break;
      if (s[j] == 'x') {
        cb[cbi]++;
      } else {
        cbi++;
      }
    }

    ans = 0;
    for (int i = 0; i < len; i++) {
      ans += abs(cf[i] - cb[i]);
    }
  }

  if (s == r) {
    ans = 0;
  }

  cout << ans << ln;

  return 0;
}