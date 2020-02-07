#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int INF = 1001001001;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int v, e, r;
  cin >> v >> e >> r;

  vector<int> s(e, INF), t(e, INF), w(e, INF);
  for (int i = 0; i < e; i++) {
    cin >> s[i] >> t[i] >> w[i];
  }

  vector<vector<P>> adj(e);
  for (int i = 0; i < e; i++) {
    adj[s[i]].push_back(P(t[i], w[i]));
  }

  vector<int> d(v, INF);
  d[r] = 0;

  int cnt = 0;
  while (cnt < v) {
    bool upd = false;
    for (int i = 0; i < e; i++) {
      int ss = i;
      for (int j = 0; j < adj[i].size(); j++) {
        int tt = adj[i][j].first;
        int ww = adj[i][j].second;

        if (d[ss] == INF) continue;

        if (d[ss] + ww < d[tt]) {
          d[tt] = d[ss] + ww;
          upd = true;
        }
      }
    }

    if (!upd) {
      break;
    }

    cnt++;
  }

  if (cnt == v) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < v; i++) {
      if (d[i] < INF) {
        cout << d[i] << endl;
      } else {
        cout << "INF" << endl;
      }
    }
  }

  return 0;
}