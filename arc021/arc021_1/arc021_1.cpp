#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a[4][4];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> a[i][j];
    }
  }

  string ans = "GAMEOVER";
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i < 3) {
        if (a[i + 1][j] == a[i][j]) {
          ans = "CONTINUE";
          break;
        }
      }

      if (j < 3) {
        if (a[i][j + 1] == a[i][j]) {
          ans = "CONTINUE";
          break;
        }
      }
    }
    if (ans == "CONTINUE") {
      break;
    }
  }

  cout << ans << ln;

  return 0;
}