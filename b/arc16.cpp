#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<string> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  ll ans = 0;
  for (int j = 0; j < 9; j++) {
    for (int i = 0; i < n; i++) {
      if (x[i][j] == 'x') {
        ans++;
      }

      if (x[i][j] == 'o') {
        if (i == 0 || x[i - 1][j] != 'o') {
          ans++;
        }
      }
    }
  }

  cout << ans << ln;

  return 0;
}