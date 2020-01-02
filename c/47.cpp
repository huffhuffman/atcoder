#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int ans = 0;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] != s[i - 1]) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}