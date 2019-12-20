#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<bitset<10>> f(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      bool b;
      cin >> b;

      f[i][j] = b;
    }
  }

  int p[n + 10][20];
  memset(p, 0, sizeof(p));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= 10; j++) {
      cin >> p[i][j];
    }
  }

  ll ans = -(1<<31);
  for (int i = 1; i < (1 << 10); i++) {
    bitset<10> b(i);

    ll v = 0;
    for (int x = 0; x < n; x++) {
      int count = 0;

      for (int y = 0; y < 10; y++) {
        if (b[y] && f[x][y]) {
          count++;
        }
      }

      v += p[x][count];
    }

    if (v >= ans) {
      ans = v;
    }
  }

  cout << ans << endl;

  return 0;
}