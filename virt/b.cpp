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

  int bingo[3][3] = {};
  for (int i = 0; i < n; i++) {
    int num = b[i];
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (num == a[j][k]) {
          bingo[j][k] = 1;
        }
      }
    }
  }

  int ans = 0;
  bool naname1 = 1;
  bool naname2 = 1;
  for (int i = 0; i < 3; i++) {
    bool tate = bingo[0][i] && bingo[1][i] && bingo[2][i];
    bool yoko = bingo[i][0] && bingo[i][1] && bingo[i][2];
    if (!bingo[i][i]) {
      naname1 = false;
    }
    if (!bingo[i][2 - i]) {
      naname2 = false;
    }

    if (tate) ans++;
    if (yoko) ans++;
  }

  if (naname1) ans++;
  if (naname2) ans++;
  cout << (ans > 0 ? "Yes" : "No") << ln;

  return 0;
}