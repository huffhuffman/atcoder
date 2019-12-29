#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  ll ans = 0;

  if (n % 2 == 0) {
    n /= 2;
    while (n) {
      ans += n / 5;
      n /= 5;
    }
  }

  cout << ans << endl;

  return 0;
}