#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sort(s.begin(), s.end());

  int ans = accumulate(s.begin(), s.end(), 0);

  if (ans % 10 == 0) {
    for (int i = 0; i < n; i++) {
      if ((ans - s[i]) % 10 != 0) {
        ans -= s[i];
        break;
      }
    }

    if (ans % 10 == 0) ans = 0;
  }

  cout << ans << endl;

  return 0;
}