#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = -1000000;
  for (int i = 0; i < n; i++) {  // tkhs
    int aMax = -1000000;
    int tMax = -1000000;

    for (int j = 0; j < n; j++) {  // aoki
      if (i == j) continue;

      int tkhs = 0;
      int aoki = 0;
      int cnt = 0;
      for (int k = min(i, j); k <= max(i, j); k++) {
        if (cnt % 2 == 0) {
          tkhs += a[k];
        } else {
          aoki += a[k];
        }
        cnt++;
      }

      if (aoki > aMax) {
        tMax = tkhs;
        aMax = aoki;
      }
    }
    ans = max(ans, tMax);
  }

  cout << ans << endl;
  return 0;
}