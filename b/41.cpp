#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll a, b, c;
  cin >> a >> b >> c;

  ll ans = a % MOD * b % MOD * c % MOD;

  cout << ans << endl;

  return 0;
}