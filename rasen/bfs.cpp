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

  vector<int> d(n, -1);
  vector<bool> pushed(n, false);
  queue<int> Q;

  Q.push(0);
  pushed[0] = true;

  d[0] = 0;

  while (!Q.empty()) {
    int u = Q.front();

    int parentDist = d[u];

    for (int i = 0; i < adjacent[u].size(); i++) {
      int v = adjacent[u][i];

      if (!pushed[v]) {
        Q.push(v);
        pushed[v] = true;
        d[v] = parentDist + 1;
      }
    }

    Q.pop();
  }

  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << d[i] << endl;
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