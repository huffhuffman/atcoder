#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll x;
  cin >> x;

  ll ans = 0;
  if(x <= 6) {
    ans = 1;
  } else if(x <= 11) {
    ans = 2;
  } else {
    ans += (x / 11) * 2;
    if(x % 11 != 0) {
      ans += x % 11 <= 6 ? 1 : 2;
    }
  }


  cout << ans << endl;

  return 0;
}