#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;
  vector<string> sv(h);
  for (int i = 0; i < h; i++) {
    cin >> sv.at(i);
  }

  vector<int> dx = {-1, 0, 0, 1};
  vector<int> dy = {0, -1, 1, 0};

  string ans = "Yes";
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c = sv.at(i).at(j);

      if (c != '#') continue;

      bool found = false;
      for (int k = 0; k < 4; k++) {
        int di = i + dx.at(k);
        int dj = j + dy.at(k);
        if (di < 0 || di >= h) continue;
        if (dj < 0 || dj >= w) continue;

        if (sv.at(di).at(dj) == '#') {
          found = true;
          break;
        }
      }

      if (!found) ans = "No";
    }
  }

  cout << ans << endl;

  return 0;
}