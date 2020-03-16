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
  ll q;
  cin >> q;
  deque<char> ans;
  for (int i = 0; i < s.size(); i++) {
    ans.push_back(s[i]);
  }

  bool rev = false;
  for (int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      rev = !rev;
      continue;
    } else {
      int f;
      char c;
      cin >> f >> c;
      if (f == 1) {
        if (!rev) {
          ans.push_front(c);
        } else {
          ans.push_back(c);
        }
      } else {
        if (rev) {
          ans.push_front(c);
        } else {
          ans.push_back(c);
        }
      }
    }
  }

  if (rev) {
    reverse(all(ans));
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i];
  }
  cout << ln;

  return 0;
}