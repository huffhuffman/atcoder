#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int n, k;
int t[5][5];

bool dfs(int i, int sum) {
  if (i == n) {
    return sum != 0;
  }

  bool ok = true;
  for (int idx = 0; idx < k; idx++) {
    if (!dfs(i + 1, t[i][idx] ^ sum)) {
      ok = false;
      break;
    }
  }

  return ok;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      cin >> t[i][j];
    }
  }

  bool ans = dfs(0, 0);

  cout << (ans ? "Nothing" : "Found") << endl;

  return 0;
}