#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, m;
  cin >> n >> m;

  ll ans = 0;

  if (n == 1 && m == 1) {
    ans = 1;
  } else if (n == 1 || m == 1) {
    ans = n * m - 2;
  } else {
    ans = (n - 2) * (m - 2);
  }

  cout << ans << endl;

  return 0;
}