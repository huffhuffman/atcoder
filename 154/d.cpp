#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

vector<double> sum(2000);

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  vector<int> p(n);
  vector<double> d(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  sum[0] = 0;
  for (int i = 1; i < 1100; i++) {
    sum[i] = sum[i - 1] + i;
  }

  for (int i = 0; i < n; i++) {
    d[i] = sum[p[i]] / p[i];
  }

  double ans = 0;
  double t = 0;
  for (int i = k - 1; i < n; i++) {
    if (i == k - 1) {
      for (int j = 0; j < k; j++) {
        t += d[i - j];
      }
    } else {
      t += d[i];
      t -= d[i - k];
    }

    if (ans < t) {
      ans = t;
    }
  }

  cout << setprecision(10);
  cout << ans << endl;

  return 0;
}