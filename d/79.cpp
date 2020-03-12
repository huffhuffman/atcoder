#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
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

  int c[10][10];
  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      cin >> c[i][j];
    }
  }

  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> a[i][j];
    }
  }

  for (int k = 0; k < 10; k++) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if (c[i][j] > c[i][k] + c[k][j]) {
          c[i][j] = c[i][k] + c[k][j];
        }
      }
    }
  }

  ll ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a[i][j] != -1) {
        ans += c[a[i][j]][1];
      }
    }
  }

  cout << ans << ln;

  return 0;
}