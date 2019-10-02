#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int getH(int cx, int cy, int x, int y, int h) {
  return h + abs(x - cx) + abs(y - cy);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int idx;

  vector<int> x(n), y(n), h(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> h[i];

    if (h[i] != 0) idx = i;
  }

  int cx, cy, H;
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      cx = i;
      cy = j;
      int hi = h[idx];
      int xi = x[idx];
      int yi = y[idx];

      bool ok = true;
      H = getH(cx, cy, xi, yi, hi);
      for (int k = 0; k < n; k++) {
        if (h[k] == max(0, H - abs(x[k] - cx) - abs(y[k] - cy))) continue;

        ok = false;
        break;
      }

      if (ok) {
        cout << cx << " " << cy << " " << H << endl;

        return 0;
      }
    }
  }

  return 0;
}