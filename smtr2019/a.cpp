#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int m1, d1, m2, d2;
  cin >> m1 >> d1 >> m2 >> d2;

  int ans = 1;
  if (m1 == m2) {
    ans = 0;
  }

  cout << ans << endl;

  return 0;
}