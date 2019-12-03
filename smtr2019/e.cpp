#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> c(n + 1, 0);
  c[0] = 3;
  ll ans = 1;
  for (int i = 0; i < n; i++) {
    int cnt = a[i];

    if (c[cnt] == 0) {
      cout << 0 << endl;
      return 0;
    }

    ans *= c[cnt];
    ans %= MOD;
    c[cnt]--;
    c[cnt + 1]++;
  }

  cout << ans << endl;

  return 0;
}