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
  ans += toupper(s[0]);
  for (int i = 1; i < s.size(); i++) {
    ans += tolower(s[i]);
  }

  cout << ans << endl;

  return 0;
}