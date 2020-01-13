#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int h, w;
int dp[20][20];

vector<string> s;

void dfs(int ih, int iw, int dist) {
  if (dp[ih][iw] == -1 || dp[ih][iw] > dist) {
    dp[ih][iw] = dist;
  } else {
    return;
  }

  if (ih + 1 < h && s[ih + 1][iw] != '#') {
    dfs(ih + 1, iw, dist + 1);
  }
  if (ih - 1 >= 0 && s[ih - 1][iw] != '#') {
    dfs(ih - 1, iw, dist + 1);
  }
  if (iw + 1 < w && s[ih][iw + 1] != '#') {
    dfs(ih, iw + 1, dist + 1);
  }
  if (iw - 1 >= 0 && s[ih][iw - 1] != '#') {
    dfs(ih, iw - 1, dist + 1);
  }

  return;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> h >> w;
  memset(dp, -1, sizeof dp);
  s.resize(h);
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }

  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      // cをスタートしたときの各点への最短経路を求める
      char c = s[i][j];
      if (c == '.') {
        memset(dp, -1, sizeof dp);

        dfs(i, j, 0);
        int dist = 0;
        for (int ih = 0; ih < h; ih++) {
          for (int iw = 0; iw < w; iw++) {
            dist = max(dp[ih][iw], dist);
          }
        }

        ans = max(ans, dist);
      } else {
        continue;
      }
    }
  }

  cout << ans << endl;

  return 0;
}