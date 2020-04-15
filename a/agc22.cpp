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
  string b = "zyxwvutsrqponmlkjihgfedcba";
  set<char> st;
  for (char c = 'a'; c <= 'z'; c++) {
    st.insert(c);
  }

  for (int i = 0; i < s.size(); i++) {
    st.erase(s[i]);
  }

  if (st.size() > 0) {
    cout << s + *st.begin() << ln;
  } else if (s == b) {
    cout << -1 << ln;
  } else {
    string t = s;
    next_permutation(all(t));
    for (int i = 0; i < t.size(); i++) {
      cout << t[i];
      if (t[i] != s[i]) {
        cout << ln;
        break;
      }
    }
  }

  return 0;
}