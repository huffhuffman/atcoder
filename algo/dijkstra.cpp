#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;  // fisrtは最短距離、 secondは頂点の番号
constexpr int INF = 1001001001;

struct edge {
  int to, cost;
};

int V, E;
constexpr int MAX_V = 100000;
vector<edge> G[MAX_V];  // G[i] = 頂点iに隣接するedgeのvectorからなる隣接リスト
// G[i][j].to でi から to への辺、 G[i][j].cost でその辺のコスト

int d[MAX_V];

void dijkstra(int s) {
  priority_queue<P, vector<P>, greater<P>> que;
  fill(d, d + V, INF); // 距離を全部 INF で初期化
  d[s] = 0;
  que.push(P(0, s));  // 始点への最短距離0, 始点の番号

  while (!que.empty()) {
    P p = que.top();
    que.pop();

    int v = p.second;  // 頂点の番号

    // 頂点vの最短距離よりqueから取り出したものの最短距離のほうがでかかったらスキップ
    if (d[v] < p.first) continue;

    for (int i = 0; i < G[v].size(); i++) {
      edge e = G[v][i];

      if (d[e.to] > d[v] + e.cost) {
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> V >> E;

  int r;
  cin >> r;
  for (int i = 0; i < E; i++) {
    int s, t, cost;
    cin >> s >> t >> cost;
    edge e = {t, cost};
    G[s].push_back(e);
  }

  dijkstra(r);

  for (int i = 0; i < V; i++) {
    if (d[i] == INF) {
      cout << "INF" << endl;
    } else {
      cout << d[i] << endl;
    }
  }

  return 0;
}