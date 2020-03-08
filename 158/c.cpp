#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int ans = -1;
  for (int i = 0; i <= 1000000; i++) {
    if (floor(i * 0.08) == a && floor(i * 0.1) == b) {
      ans = i;
      break;
    }
  }

  cout << ans << ln;

  return 0;
}