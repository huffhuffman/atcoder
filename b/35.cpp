#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  int t;
  cin >> s >> t;

  int x = 0;
  int y = 0;
  int offset = 0;
  for (int i = 0; i < s.size(); i++) {
    char c = s[i];
    if (c == 'L') {
      --x;
    } else if (c == 'R') {
      ++x;
    } else if (c == 'U') {
      ++y;
    } else if (c == 'D') {
      --y;
    } else {
      ++offset;
    }
  }

  int ans = abs(x) + abs(y);
  if (t == 1) {
    ans += offset;
  } else {
    ans = max(ans - offset, (int)s.size() % 2);
  }

  cout << ans << endl;

  return 0;
}