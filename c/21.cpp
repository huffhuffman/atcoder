#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int a, b;
  cin >> a >> b;
  --a;
  --b;

  int m;
  cin >> m;

  int tg[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      tg[i][j] = 0;
    }
  }

  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    --x;
    --y;
    tg[x][y] = 1;
    tg[y][x] = 1;
  }

  queue<int> q;
  q.push(a);

  vector<int> done(n, 0);
  done[a] = 1;

  int dist[n];
  dist[a] = 0;

  vector<ll> cnt(n, 0);
  cnt[a] = 1;
  while (!q.empty()) {
    int node = q.front();
    q.pop();

    if (node == b) {
      continue;
    }

    int pDist = dist[node];

    for (int c = 0; c < n; c++) {
      if (tg[node][c] > 0) {
        if (done[c] == 0) {
          q.push(c);
          done[c] = 1;
          dist[c] = pDist + 1;
        }

        /*
        通常、bfsはdoneになったところを無視するが、今回は最短距離として他の頂点から到達してきたとき
        経路数として計上するためにこうしている
        */
        if (dist[c] == pDist + 1) {
          cnt[c] += cnt[node];
          cnt[c] %= MOD;
        }
      }
    }
  }

  cout << cnt[b] << endl;

  return 0;
}