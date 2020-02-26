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

  vector<int> l(n * 2);
  for (int i = 0; i < n * 2; i++) {
    cin >> l[i];
  }

  sort(l.begin(), l.end());
  int ans = 0;
  for (int i = 0; i < n * 2; i += 2) {
    ans += l[i];
  }

  cout << ans << endl;

  return 0;
}