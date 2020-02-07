#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int INF = 1001001001;

int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int r, c, sy, sx, gy, gx;
  cin >> r >> c >> sy >> sx >> gy >> gx;
  --sy;
  --sx;
  --gy;
  --gx;

  vector<string> g(r);
  for (int i = 0; i < r; i++) {
    cin >> g[i];
  }

  queue<P> q;
  q.push(P(sy, sx));

  int d[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      d[i][j] = INF;
    }
  }

  d[sy][sx] = 0;

  while (!q.empty()) {
    P v = q.front();
    q.pop();

    int y = v.first;
    int x = v.second;

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if(g[ny][nx] == '.' && d[ny][nx] > d[y][x] + 1) {
        d[ny][nx] = d[y][x] + 1;
        q.push(P(ny, nx));
      }
    }
  }

  cout << d[gy][gx] << endl;

  return 0;
}