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

  int wd, n, m;
  cin >> wd >> n >> m;
  vector<int> d(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> d[i];
  }
  d.emplace_back(0);
  d.emplace_back(wd);
  sort(d.begin(), d.end());

  vector<int> k(m);
  for (int i = 0; i < m; i++) {
    cin >> k[i];
  }

  int ans = 0;
  for (int i = 0; i < m; i++) {
    int t = k[i];

    int l = -1;
    int r = d.size();

    int mx = INF;
    while (r - l > 1) {
      int mid = l + (r - l) / 2;

      if (t > d[mid]) {
        l = mid;
        mx = min(mx, abs(t - d[mid]));
      } else {
        r = mid;
        mx = min(mx, abs(t - d[mid]));
      }
    }

    ans += mx;
  }

  cout << ans << ln;

  return 0;
}

/*
8
3
2
3
1
4
6
*/