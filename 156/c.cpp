#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  sort(x.begin(), x.end());

  int lim = x[n - 1];

  ll ans = -1;
  for (int i = 1; i <= lim; i++) {
    int p = i;
    ll sum = 0;
    for (int j = 0; j < n; j++) {
      int t = (x[j] - p) * (x[j] - p);
      sum += t;
    }

    if (ans == -1 || ans > sum) {
      ans = sum;
    }
  }

  cout << ans << ln;

  return 0;
}