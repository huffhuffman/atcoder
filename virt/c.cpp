#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
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

  ll ans = INF;
  for (int p = 1; p <= 100; p++) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      ll t = (x[i] - p);
      sum += t * t;
    }
    if (sum < ans) {
      ans = sum;
    }
  }

  cout << ans << ln;

  return 0;
}