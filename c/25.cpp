#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int table[3][3];
int b[2][3];
int c[3][2];

// 得点の計算
P calc() {
  ll chokudai = 0;
  ll chokuko = 0;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      if (table[i][j] == table[i + 1][j]) {
        chokudai += b[i][j];
      } else {
        chokuko += b[i][j];
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      if (table[i][j] == table[i][j + 1]) {
        chokudai += c[i][j];
      } else {
        chokuko += c[i][j];
      }
    }
  }

  return {chokudai, chokuko};
}

P dfs(int cnt) {
  if (cnt == 9) {
    return calc();
  }

  bool is_chokudai = cnt % 2 == 0;

  P ans = {-1, -1};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (table[i][j] == -1) {
        // chokudaiの番なら1、そうでなければ0
        table[i][j] = is_chokudai;

        auto res = dfs(cnt + 1);
        if (ans.first < 0) {
          ans = res;
        } else {
          // 自分の点数を最大化
          bool condition =
              is_chokudai ? ans.first < res.first : ans.second < res.second;

          if (condition) {
            ans = res;
          }

          // かつ、相手の点数を最小化できるならそうする
          condition = is_chokudai
                          ? (ans.first == res.first && ans.second > res.second)
                          : (ans.second == res.second && ans.first > res.first);

          if (condition) {
            ans = res;
          }
        }

        table[i][j] = -1;
      }
    }
  }
  return ans;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> b[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> c[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      table[i][j] = -1;
    }
  }

  auto ans = dfs(0);

  cout << ans.first << endl;
  cout << ans.second << endl;

  return 0;
}