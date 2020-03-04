#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;
  int n;
  cin >> n;
  priority_queue<P> pq;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    pq.push(P(a, i + 1));
  }

  vector<vector<int>> ans(h, vector<int>(w));

  P cur = pq.top();
  pq.pop();

  int id = cur.second;
  int cnt = cur.first;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      int y = i;
      int x = i % 2 ? j : w - 1 - j;
      ans[y][x] = id;
      cnt--;

      if (cnt == 0) {
        cur = pq.top();
        pq.pop();
        id = cur.second;
        cnt = cur.first;
      }
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << ans[i][j];
      if (j != w - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}