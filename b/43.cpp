#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  string ans = "";
  for (int i = 0; i < s.size(); i++) {
    char c = s[i];

    switch (c) {
      case '0':
        ans += '0';
        break;
      case '1':
        ans += '1';
        break;
      case 'B':
        if (ans.size() > 0) {
          ans.pop_back();
          break;
        }
    }
  }

  cout << ans << endl;

  return 0;
}