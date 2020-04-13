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
  string s;
  cin >> s;

  if (n < 3) {
    cout << 0 << ln;
    return 0;
  }

  vector<int> r, g, b;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'R') {
      r.push_back(i);
    } else if (s[i] == 'G') {
      g.push_back(i);
    } else {
      b.push_back(i);
    }
  }

  if (r.size() > 0 && g.size() > 0 && b.size() > 0) {
  } else {
    cout << 0 << ln;
    return 0;
  }

  ll total = r.size() * g.size() * b.size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int li = i - j;
      int ri = i + j;
      if (li < 0 || ri > n - 1) {
        continue;
      }

      set<char> st;
      st.insert(s[i]);
      st.insert(s[li]);
      st.insert(s[ri]);
      if (st.size() >= 3) {
        total--;
      }
    }
  }

  cout << total << ln;

  return 0;
}
