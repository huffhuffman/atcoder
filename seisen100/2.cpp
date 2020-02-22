#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if(i % 2 == 0) continue;

    int cnt = 0;
    for (int d = 1; d <= i; d++) {
      if (i % d == 0) {
        cnt++;
      }
    }

    if (cnt == 8) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}