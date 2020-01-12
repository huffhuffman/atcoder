#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<ll> sum(n);
  sum[0] = a[0];
  for (int i = 1; i < n; i++) {
    sum[i] += sum[i - 1] + a[i];
  }

  ll ans = sum[k - 1];
  for (int i = k; i < n; i++) {
    ans += (sum[i] - sum[i - k]);
  }

  cout << ans << endl;

  return 0;
}