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

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  string ans = "APPROVED";
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      if (a[i] % 3 == 0 || a[i] % 5 == 0) {
        continue;
      } else {
        ans = "DENIED";
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}