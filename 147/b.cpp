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
  for (int i = 0; i < len / 2; i++) {
    char cf = s[i];
    char cb = s[len - 1 - i];

    if (cf == cb) continue;

    ans++;
  }

  cout << ans << endl;

  return 0;
}