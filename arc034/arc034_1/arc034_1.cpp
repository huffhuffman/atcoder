#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  vector<double> a(n), b(n), c(n), d(n), e(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
  }

  double ans = 0;
  for (int i = 0; i < n; i++) {
    double sum = a[i] + b[i] + c[i] + d[i];
    sum += e[i] * 110 / 900;

    if (sum > ans) {
      ans = sum;
    }
  }

  cout << setprecision(10);
  cout << ans << ln;

  return 0;
}