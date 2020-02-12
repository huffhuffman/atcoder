#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

constexpr int MAXX = 500;

int r, c, k;

int uw[MAXX][MAXX];
int dw[MAXX][MAXX];

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> r >> c >> k;
  vector<string> s(r);
  for (int i = 0; i < r; i++) {
    cin >> s[i];
  }

  for (int j = 0; j < c; j++) {
    for (int i = 0; i < r; i++) {
      uw[i][j] = s[i][j] == 'x' ? 0 : (i == 0 ? 0 : uw[i - 1][j]) + 1;
    }
    for (int i = r - 1; i >= 0; i--) {
      dw[i][j] = s[i][j] == 'x' ? 0 : (i == r - 1 ? 0 : dw[i + 1][j]) + 1;
    }
  }

  int ans = 0;

  for (int i = k - 1; i <= r - k; i++) {
    for (int j = k - 1; j <= c - k; j++) {
      bool ok = true;
      for (int ik = 0; ik < k; ik++) {
        if (uw[i][j + ik] < k - ik) ok = false;
        if (uw[i][j - ik] < k - ik) ok = false;
        if (dw[i][j + ik] < k - ik) ok = false;
        if (dw[i][j - ik] < k - ik) ok = false;
      }
      if (ok) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}