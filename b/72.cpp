#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  string ans = "";
  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 0) ans += s.at(i);
  }

  cout << ans << endl;

  return 0;
}