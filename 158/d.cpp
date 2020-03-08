#include <bits/stdc++.h>
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

  int q;
  cin >> q;

  vector<int> t(q), f(q);
  vector<char> c(q);
  for (int i = 0; i < q; i++) {
    int tmp;
    cin >> tmp;
    if (tmp == 1) {
      t[i] = tmp;
    } else {
      t[i] = tmp;
      cin >> f[i] >> c[i];
    }
  }

  // string ans = s;
  deque<char> ans;

  for (int i = 0; i < s.size(); i++) {
    ans.push_back(s[i]);
  }

  bool rev = false;
  for (int i = 0; i < q; i++) {
    if (t[i] == 1) {
      rev = !rev;
    } else {
      if (f[i] == 1) {
        if (rev) {
          ans.push_back(c[i]);
        } else {
          ans.push_front(c[i]);
        }
      } else {
        if (!rev) {
          ans.push_back(c[i]);
        } else {
          ans.push_front(c[i]);
        }
      }
    }
  }

  if (rev) {
    reverse(ans.begin(), ans.end());
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i];
  }

  cout << endl;

  return 0;
}