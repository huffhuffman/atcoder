#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef tuple<ll, int, int> T;

const int INF = 1001001001;

int h, w, t;
vector<string> s(12);
int sy, sx, gy, gx;
int dy[] = {1, 0, 0, -1};
int dx[] = {0, 1, -1, 0};

bool dijkstra(int m) {
  ll g[12][12];

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      g[i][j] = INF;
    }
  }

  priority_queue<T, vector<T>, greater<T>> q;

  q.push(make_tuple(0, sy, sx));
  g[sy][sx] = 0;
  while (!q.empty()) {
    ll c;
    int y, x;

    tie(c, y, x) = q.top();
    q.pop();

    for (int i = 0; i < 4; i++) {
      int ny = y + dy[i];
      int nx = x + dx[i];

      // 範囲内参照以外、つまり範囲外参照はスキップ
      if (!(0 <= ny && ny < h && 0 <= nx && nx < w)) continue;
      if (s[ny][nx] == '#') {
        if (g[ny][nx] > c + m) {
          g[ny][nx] = c + m;
          q.push(make_tuple(c + m, ny, nx));
        }
      } else {
        if (g[ny][nx] > c + 1) {
          g[ny][nx] = c + 1;
          q.push(make_tuple(c + 1, ny, nx));
        }
      }
    }
  }

  // 制限時間T以内か
  return g[gy][gx] <= t;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> h >> w >> t;

  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s[i][j] == 'S') {
        sy = i;
        sx = j;
      }

      if (s[i][j] == 'G') {
        gy = i;
        gx = j;
      }
    }
  }

  ll l = 1;
  ll r = INF;

  // 二分探索 * ダイクストラ
  while (r - l > 1) {
    int x = (l + r) / 2;

    if (dijkstra(x)) {
      l = x;
    } else {
      r = x;
    }
  }

  cout << l << endl;

  return 0;
}