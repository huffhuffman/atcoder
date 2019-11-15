#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> adjacent(n);
  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    --u;

    for (int i = 0; i < k; i++) {
      int v;
      cin >> v;
      --v;

      adjacent[u].push_back(v);
    }
  }

  vector<int> d(n, 0), f(n, 0);
  vector<bool> visited(n, false);
  stack<int> S;

  S.push(0);

  int t = 1;

  d[0] = t;

  while (!S.empty()) {
    ++t;

    int u = S.top();

    if (!visited[u]) {
      visited[u] = true;
    }

    bool done = true;
    for (int i = 0; i < adjacent[u].size(); i++) {
      int v = adjacent[u][i];

      if (!visited[v]) {
        done = false;
        d[v] = t;
        S.push(v);
        break;
      }
    }

    if (done) {
      f[u] = t;
      S.pop();
    }

    // スタックが空になった後、未訪問なノードがあればそれを始点として再度DFSする
    if (S.empty()) {
      for (int i = 0; i < n; i++) {
        if (!visited[i]) {
          ++t;
          S.push(i);
          d[i] = t;
          break;
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << d[i] << " " << f[i] << endl;
  }

  return 0;
}

/*
6
1 2 2 3
2 2 3 4
3 1 5
4 1 6
5 1 6
6 0
*/