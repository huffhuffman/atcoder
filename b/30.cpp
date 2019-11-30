#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  n %= 12;

  double dn = n * 30.0 + (m / 2.0);

  double dm = m * 6.0;

  double ans = abs(dn - dm);

  if(ans > 180) {
    ans = 360 - ans;
  }

  cout << setprecision(10);

  cout << ans << endl;

  return 0;
}