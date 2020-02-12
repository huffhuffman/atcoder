#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int n, m;
int d[310][310];

void w_f() {
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        d[i][j] = min(d[i][j], d[i][k] + d[j][k]);
      }
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  for (int i = 0; i < 310; i++) {
    for (int j = 0; j < 310; j++) {
      d[i][j] = INF;
      if (i == j) d[i][j] = 0;
    }
  }

  vector<P> sadj;

  for (int i = 0; i < m; i++) {
    int tu, tv, tl;
    cin >> tu >> tv >> tl;
    tu--;
    tv--;

    if (tu == 0) {
      sadj.emplace_back(P(tv, tl));
    } else if (tv == 0) {
      sadj.emplace_back(P(tu, tl));
    } else {
      d[tu][tv] = d[tv][tu] = tl;
    }
  }

  w_f();

  int ans = INF;
  for (auto u : sadj) {
    for (auto v : sadj) {
      if(u.first == v.first) continue;

      int l = u.second + d[u.first][v.first] + v.second;

      ans = min(ans, l);
    }
  }

  cout << (ans == INF ? -1 : ans) << endl;

  return 0;
}
