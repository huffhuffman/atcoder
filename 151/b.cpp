#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k, m;
  cin >> n >> k >> m;

  vector<int> a(n - 1);

  ll tsum = 0;
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i];
    tsum += a[i];
  }

  int ans = 0;
  bool ok = false;
  for (int i = 0; i <= k; i++) {
    int sum = tsum + i;

    double avg = sum / n;

    if (avg >= m) {
      ans = i;
      ok = true;
      break;
    }
  }

  if (ok) {
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}