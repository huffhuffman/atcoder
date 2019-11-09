#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int w, h, n;
  cin >> w >> h >> n;

  vector<int> x(n, 0), y(n, 0), a(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> a[i];
  }

  int xmin = 0;
  int xmax = w;
  int ymin = 0;
  int ymax = h;

  for (int i = 0; i < n; i++) {
    if (a[i] == 1) {
      xmin = max(xmin, x[i]);
    } else if (a[i] == 2) {
      xmax = min(xmax, x[i]);
    } else if (a[i] == 3) {
      ymin = max(ymin, y[i]);
    } else {
      ymax = min(ymax, y[i]);
    }
  }

  cout << max(xmax - xmin, 0) * max(ymax - ymin, 0) << endl;

  return 0;
}