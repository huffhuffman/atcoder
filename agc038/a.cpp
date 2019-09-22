#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int h, w, a, b;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> h >> w >> a >> b;
  vector<vector<int>> board(h, vector<int>(w));

  vector<int> b0(w, 0), b1(w, 0);

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      board.at(i).at(j) = 0;
    }
  }

  for (int i = 0; i < h; i++) {
    int countA = 0;
    for (int j = 0; j < w; j++) {
      if (countA >= a) break;
      board.at(i).at(j) = 1;
      b1.at(j)++;
      countA++;
    }
  }

  for (int i = 0; i < b; i++) {
    for (int j = 0; j < w; j++) {
      board.at(i).at(j) = board.at(i).at(j) == 1 ? 0 : 1;
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << board.at(i).at(j);
    }
    cout << endl;
  }

  return 0;
}