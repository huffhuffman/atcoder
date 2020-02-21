#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a[3], b[3];

  map<int, int> m;
  for (int i = 0; i < 3; i++) {
    cin >> a[i] >> b[i];
    m[a[i]]++;
    m[b[i]]++;
  }

  int mx = 0;
  for (auto& p : m) {
    mx = max(p.second, mx);
  }

  cout << (mx >= 3 ? "NO" : "YES") << endl;

  return 0;
}