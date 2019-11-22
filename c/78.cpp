#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int k = 1;
  for (int i = 0; i < m; i++) {
    k *= 2;
  }

  int ans = (1900 * m + (n - m) * 100) * k;

  cout << ans << endl;

  return 0;
}