#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  const vector<int> di = {-1, -1, -1, 0, 0, 1, 1, 1};
  const vector<int> dj = {-1, 0, 1, -1, 1, -1, 0, 1};

  int h, w;
  cin >> h >> w;

  vector<string> sv(h);
  for (int i = 0; i < h; i++) {
    cin >> sv.at(i);
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (sv.at(i).at(j) == '#') continue;

      // count bombs
      int num = 0;
      for (int d = 0; d < 8; d++) {
        int x = i + di.at(d);
        int y = j + dj.at(d);

        if (x < 0 || x >= h) continue;
        if (y < 0 || y >= w) continue;
        if (sv.at(x).at(y) == '#') num++;
      }

      sv.at(i).at(j) = num + '0';
    }
  }

  for (int i = 0; i < h; i++) {
    cout << sv.at(i) << endl;
  }

  return 0;
}