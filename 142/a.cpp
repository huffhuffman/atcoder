#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  double even = 0;
  double odd = 0;
  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  double ans = odd / n;

  cout << ans << endl;

  return 0;
}