#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
int h, w, k;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> h >> w >> k;

  vector<string> a(h);
  vector<vector<int>> b(h, vector<int>(w, 0));
  for (int i = 0; i < h; i++) {
    cin >> a[i];
  }

  int curr = 1;
  for (int i = 0; i < h; i++) {
    if (a[i].find("#") == a[i].npos) {
      continue;
    }

    bool fst = true;

    for (int j = 0; j < w; j++) {
      char c = a[i][j];
      if (c == '#') {
        if (fst) {
          fst = false;
        } else {
          curr++;
        }
      }
      b[i][j] = curr;
    }
    curr++;
  }

  for (int i = 0; i < h; i++) {
    if (b[i][0] != 0) {
      continue; // すでに処理済みの行はなにもしない
    }

    // 未処理の行を処理
    if (i == 0) {
      int targeti;
      for (int ii = i; ii < h; ii++) {
        if (b[ii][0] != 0) {
          targeti = ii;
          break;
        }
      }

      b[i] = b[targeti];
    } else {
      b[i] = b[i - 1];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << (j ? " " : "") << b[i][j];
    }
    cout << endl;
  }

  return 0;
}