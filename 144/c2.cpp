#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  ll ans = 0;
  for (ll i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      ans = (i - 1) + (n / i) - 1;
    }
  }

  if(ans == 0) {
    ans = n - 1;
  }

  cout << ans << endl;

  return 0;
}