#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;

  string ans = "";

  int dx = tx - sx;
  int dy = ty - sy;

  for (int i = 0; i < dy; i++) {
    ans += 'U';
  }
  for (int i = 0; i < dx; i++) {
    ans += 'R';
  }
  for (int i = 0; i < dy; i++) {
    ans += 'D';
  }
  for (int i = 0; i < dx; i++) {
    ans += 'L';
  }
  ans += 'L';
  for (int i = 0; i < dy + 1; i++) {
    ans += 'U';
  }
  for (int i = 0; i < dx + 1; i++) {
    ans += 'R';
  }
  ans += 'D';
  ans += 'R';
  for (int i = 0; i < dy + 1; i++) {
    ans += 'D';
  }
  for (int i = 0; i < dx + 1; i++) {
    ans += 'L';
  }
  ans += 'U';

  cout << ans << endl;

  return 0;
}