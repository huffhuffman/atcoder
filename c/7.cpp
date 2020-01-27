#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int r, c, sy, sx, gy, gx;
  cin >> r >> c >> sy >> sx >> gy >> gx;
  sx--;
  sy--;
  gx--;
  gy--;

  vector<string> maze(r);
  for (int i = 0; i < r; i++) {
    cin >> maze[i];
  }

  int dp[50][50];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      dp[i][j] = 1000000000;
    }
  }

  dp[sy][sx] = 0;

  queue<P> q;
  q.push(P(sy, sx));

  set<P> done;
  done.insert(P(sy, sx));

  auto search = [&](int y, int x, int dist) {
    if (maze[y][x] == '.' && done.find(P(y, x)) == done.end()) {
      dp[y][x] = min(dist + 1, dp[y][x]);
      q.push(P(y, x));
      done.insert(P(y, x));
    }
  };

  while (!q.empty()) {
    P node = q.front();
    q.pop();

    int y = node.first;
    int x = node.second;
    int dist = dp[y][x];

    search(y, x + 1, dist);
    search(y, x - 1, dist);
    search(y + 1, x, dist);
    search(y - 1, x, dist);
  }

  cout << dp[gy][gx] << endl;

  return 0;
}