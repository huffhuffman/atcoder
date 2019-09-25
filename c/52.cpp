#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> d(1001, 0);

  for (int i = 2; i <= n; i++) {
    int num = i;
    for (int j = 2; j <= n; j++) {
      while (num % j == 0) {
        num /= j;
        d.at(j)++;
      }

      if (num == 1) break;
    }
  }

  ll ans = 1;
  for (int i = 0; i < 1001; i++) {
    if (d.at(i) > 0) {
      ans = ans * (d.at(i) + 1) % MOD;
    }
  }

  cout << ans << endl;

  return 0;
}