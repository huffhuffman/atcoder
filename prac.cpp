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
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  string ind = "indeednow";
  map<char, ll> ref;
  for (int i = 0; i < ind.size(); i++) {
    ref[ind[i]]++;
  }

  for (int i = 0; i < n; i++) {
    map<char, ll> mp;
    for (char c : s[i]) {
      mp[c]++;
    }

    bool ok = true;
    for (auto p : mp) {
      if (ref.find(p.first) == ref.end()) {
        ok = false;
        break;
      }

      if (ref[p.first] != mp[p.first]) {
        ok = false;
        break;
      }
    }

    cout << (ok ? "YES" : "NO") << ln;
  }

  return 0;
}