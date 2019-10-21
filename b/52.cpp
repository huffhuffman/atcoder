#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  string s;
  cin >> n >> s;

  int ans = 0;

  int x = 0;
  for (int i = 0; i < n; i++) {
    char c = s[i];

    if (c == 'I') {
      ++x;
    } else {
      --x;
    }

    ans = max(ans, x);
  }

  cout << ans << endl;

  return 0;
}