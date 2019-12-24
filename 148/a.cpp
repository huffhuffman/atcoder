#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int ans[3] = {1, 2, 3};

  ans[a - 1] = -1;
  ans[b - 1] = -1;

  for (int i = 0; i < 3; i++) {
    if (ans[i] != -1) {
      cout << ans[i] << endl;
    }
  }

  return 0;
}