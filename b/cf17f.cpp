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
  ll len = s.size();

  map<char, ll> m;
  for (int i = 0; i < len; i++) {
    m[s[i]]++;
  }

  string ans = "YES";
  if (len >= 2) {
    ll d = len / 3;
    ll dm = len % 3;

    map<ll, ll> cnt;
    cnt[m['a']]++;
    cnt[m['b']]++;
    cnt[m['c']]++;

    if (cnt[d] == 3 - dm && cnt[d + 1] == dm) {
      ans = "YES";
    } else {
      ans = "NO";
    }
  }

  cout << ans << ln;

  return 0;
}