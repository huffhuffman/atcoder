#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x;
  cin >> x;

  vector<bool> t(200001, false);
  for (int i = 0; i <= x; i++) {
    if (i == 100 || i == 101 || i == 102 || i == 103 || i == 104 || i == 105) {
      t[i] = true;
    }

    if (t[i]) {
      t[i + 100] = true;
      t[i + 101] = true;
      t[i + 102] = true;
      t[i + 103] = true;
      t[i + 104] = true;
      t[i + 105] = true;
    }
  }

  int ans = 0;
  if (t[x]) {
    ans = 1;
  }

  cout << ans << endl;

  return 0;
}