#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll x, y;
  cin >> x >> y;

  ll ans = x;

  if(x % y == 0) {
    ans = -1;
  }

  cout << ans << endl;

  return 0;
}