#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmpX(vector<int> prev, vector<int> curr) {
  return prev.at(0) < curr.at(0);
}

bool cmpYGreater(vector<int> prev, vector<int> curr) {
  return prev.at(1) > curr.at(1);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<vector<int>> red(n);
  vector<vector<int>> blue(n);

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;

    red.at(i) = {a, b};
  }

  for (int i = 0; i < n; i++) {
    int c, d;
    cin >> c >> d;

    blue.at(i) = {c, d};
  }

  // xが小さい順で青をソート
  sort(blue.begin(), blue.end(), cmpX);

  // yは大きい順で赤をソート
  sort(red.begin(), red.end(), cmpYGreater);

  vector<bool> delR(n, false);  // 赤を消したかどうか

  int count = 0;
  for (int i = 0; i < n; i++) {
    int bx = blue.at(i).at(0);
    int by = blue.at(i).at(1);
    for (int j = 0; j < n; j++) {
      int rx = red.at(j).at(0);
      int ry = red.at(j).at(1);

      if (rx < bx && ry < by && !delR.at(j)) {
        delR.at(j) = true;
        count++;
        break;
      }
    }
  }

  cout << count << endl;

  return 0;
}