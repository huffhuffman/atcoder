#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = -1;
  for (int i = 1; i <= n; i++) {
    double x = floor(i * 1.08);
    if (x == n) {
      ans = i;
    }
  }

  if (ans < 0) {
    cout << ":(" << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}