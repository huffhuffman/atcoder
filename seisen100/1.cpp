#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int solve(int num, int x) {
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    for (int j = i + 1; j <= num; j++) {
      for (int k = j + 1; k <= num; k++) {
        if (i == j || j == k || i == k) continue;

        if (i + j + k == x) {
          sum++;
        }
      }
    }
  }

  return sum;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  vector<int> n, x;
  while (1) {
    int tn, tx;
    cin >> tn >> tx;

    if (tn == 0 && tx == 0) {
      break;
    } else {
      n.emplace_back(tn);
      x.emplace_back(tx);
    }
  }

  for (int i = 0; i < n.size(); i++) {
    int ans = solve(n[i], x[i]);
    cout << ans << endl;
  }

  return 0;
}