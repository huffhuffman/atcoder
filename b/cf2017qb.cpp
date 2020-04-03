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

  ll n;
  cin >> n;
  vector<ll> d(n);
  map<ll, ll> mp;
  for (int i = 0; i < n; i++) {
    cin >> d[i];
    mp[d[i]]++;
  }

  ll m;
  cin >> m;
  vector<ll> t(m);
  for (int i = 0; i < m; i++) {
    cin >> t[i];
  }

  string ans = "YES";
  for (int i = 0; i < m; i++) {
    if (mp[t[i]] > 0) {
      mp[t[i]]--;
    } else {
      ans = "NO";
      break;
    }
  }

  cout << ans << ln;

  return 0;
}