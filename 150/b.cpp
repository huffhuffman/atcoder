#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  string s;
  cin >> s;

  int ans = 0;
  for (int i = 2; i < n; i++) {
    if (s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'C') {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}