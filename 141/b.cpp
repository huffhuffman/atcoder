#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  string ans = "Yes";
  for (int i = 0; i < s.size(); i++) {
    char c = s.at(i);

    if ((i + 1) % 2 == 0) {
      if (c == 'R') ans = "No";
    } else {
      if (c == 'L') ans = "No";
    }
  }

  cout << ans << endl;

  return 0;
}