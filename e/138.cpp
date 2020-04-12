#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

string s, t;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> s >> t;

  ll slen = s.size();
  ll tlen = t.size();

  map<char, vector<ll>> mp;
  for (int i = 0; i < slen; i++) {
    mp[s[i]].push_back(i);
  }

  ll ans = 0;
  ll prev = 0;
  for (int i = 0; i < tlen; i++) {
    if (mp.find(t[i]) == mp.end()) {
      ans = -1;
      cout << ans << ln;
      return 0;
    } else {
      auto &v = mp[t[i]];
      auto lb = lower_bound(all(v), prev);
      auto idx = distance(v.begin(), lb);

      if (lb == v.end()) {
        // prev以降になく、先頭に戻る場合
        ll tail = slen - prev;
        ll head = v[0] + 1;
        ans += tail + head;
        prev = head;
      } else {
        // prev以降にあって、そのまま連続してできる場合
        ll sidx = v[idx];
        ll dist = sidx + 1 - prev;
        ans += dist;
        prev = sidx + 1;
      }
    }
  }

  cout << ans << ln;

  return 0;
}
