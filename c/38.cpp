#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // f(n) := 単調増加列の長さnのl,rの数

  /*
  f1 = 1 1,1
  f2 = 3 1,1/1,2/2,2
  f3 = 6 1,1/1,2/1,3/2,2/2,3/3,3
  f4 = 10 1,1/1,2/1,3/1,4/2,2/2,3/2,4/3,3/3,4/4,4
  fn = n + f(n - 1)
  */

  ll dp[n + 1];
  dp[0] = 0;
  for (int num = 1; num <= n; num++) {
    dp[num] = num + dp[num - 1];
  }

  vector<ll> v;
  ll seq = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[i - 1]) {
      seq++;
    } else {
      v.push_back(seq);
      seq = 1;
    }
  }
  v.push_back(seq);

  ll ans = 0;
  for (int num : v) {
    ans += dp[num];
  }

  cout << ans << endl;

  return 0;
}