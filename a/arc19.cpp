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

  map<char, char> mp;
  mp['O'] = '0';
  mp['D'] = '0';
  mp['I'] = '1';
  mp['Z'] = '2';
  mp['S'] = '5';
  mp['B'] = '8';

  for (int i = 0; i < s.size(); i++) {
    if (mp.find(s[i]) != mp.end()) {
      s[i] = mp[s[i]];
    }
  }

  ll ans = stoi(s);

  cout << ans << ln;

  return 0;
}