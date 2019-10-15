#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  ll ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
    ans %= MOD;
  }

  cout << ans << endl;

  return 0;
}