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

  vector<ll> dp(200000);
  dp[0] = 0;
  dp[1] = abs(a[1] - a[0]);

  for (int i = 2; i < n; i++) {
    ll v1 = dp[i - 1] + abs(a[i] - a[i - 1]);
    ll v2 = dp[i - 2] + abs(a[i] - a[i - 2]);

    dp[i] = min(v1, v2);
  }

  cout << dp[n - 1] << endl;

  return 0;
}