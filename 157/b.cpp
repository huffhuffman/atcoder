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

  int a[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }

  int n;
  cin >> n;

  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    int num = b[i];

    for (int y = 0; y < 3; y++) {
      for (int x = 0; x < 3; x++) {
        if (a[y][x] == num) {
          a[y][x] = 0;
        }
      }
    }
  }

  string ans = "No";

  for (int y = 0; y < 3; y++) {
    bool tok = true;
    bool yok = true;
    for (int x = 0; x < 3; x++) {
      if (a[y][x] != 0) {
        tok = false;
      }

      if (a[x][y] != 0) {
        yok = false;
      }
    }

    if (tok || yok) {
      ans = "Yes";
      break;
    }
  }

  if (a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0) {
    ans = "Yes";
  }

  if (a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0) {
    ans = "Yes";
  }

  cout << ans << endl;

  return 0;
}