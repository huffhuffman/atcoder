#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  int ans = -1;
  for (int i = 0; i < n - (k - 1); i++) {
    int l = x[i];
    int r = x[i + (k - 1)];

    bool isLp = l >= 0;
    bool isRp = r >= 0;

    int t;

    if (isLp == isRp) {
      t = max(abs(l), abs(r));
    } else {
      t = abs(max(abs(l), abs(r))) + abs(min(abs(l), abs(r))) * 2;
    }

    if (ans == -1) {
      ans = t;
    } else {
      ans = min(ans, t);
    }
  }

  cout << ans << endl;

  return 0;
}