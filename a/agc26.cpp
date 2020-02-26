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

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] == -1) continue;

    if (a[i - 1] == a[i]) {
      a[i] = -1;
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}