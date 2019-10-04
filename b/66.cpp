#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int len = s.size();

  int ans = 0;
  for (int i = 1; i < len; i++) {
    s.erase(s.size() - 1);

    if (s.size() % 2 != 0) continue;

    int halfLen = s.size() / 2;

    string h1 = s.substr(0, halfLen);
    string h2 = s.substr(halfLen, halfLen);

    if (h1 == h2) ans = max(ans, halfLen * 2);
  }

  cout << ans << endl;

  return 0;
}