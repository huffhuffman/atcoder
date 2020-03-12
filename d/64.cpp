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

  int n;
  cin >> n;
  deque<char> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  int r = 0;
  int l = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '(') r++;
    if (s[i] == ')') {
      if (r > 0) {
        r--;
      } else {
        l++;
      }
    }
  }

  while (l > 0) {
    s.push_front('(');
    l--;
  }

  while (r > 0) {
    s.push_back(')');
    r--;
  }

  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
  }
  cout << endl;

  return 0;
}