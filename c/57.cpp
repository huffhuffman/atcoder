#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int getDigits(ll num) { return to_string(num).length(); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  ll a;
  ll b;
  for (int i = sqrt(n); i > 0; i--) {
    if (n % i == 0) {
      a = i;
      b = n / i;
      break;
    }
  }

  int ans = max(getDigits(a), getDigits(b));

  cout << ans << endl;

  return 0;
}