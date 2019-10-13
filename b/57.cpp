#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(n), c(m), d(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> c[i] >> d[i];
  }

  for (int i = 0; i < n; i++) {
    int minV = 2000000000;
    int minI = 0;
    for (int j = 0; j < m; j++) {
      int dis = abs(a[i] - c[j]) + abs(b[i] - d[j]);

      if(minV > dis) {
        minV = dis;
        minI = j + 1;
      }
    }

    cout << minI << endl;
  }

  return 0;
}