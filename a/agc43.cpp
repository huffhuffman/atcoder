#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int dy[] = {0, 1};
int dx[] = {1, 0};

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;
  vector<string> g(h);
  for (int i = 0; i < h; i++) {
    cin >> g[i];
  }

  queue<P> q;
  q.push(P(0, 0));

  int d[h][w];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      d[i][j] = INF;
    }
  }

  d[0][0] = g[0][0] == '.' ? 0 : 1;
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      for (int i = 0; i < 2; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < h && nx < w) {
          int next = d[y][x] + (g[ny][nx] == '#' && g[y][x] == '.' ? 1 : 0);
          d[ny][nx] = min(next, d[ny][nx]);
        }
      }
    }
  }

  cout << d[h - 1][w - 1] << ln;

  return 0;
}