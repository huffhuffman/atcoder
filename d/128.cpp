#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  deque<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int lim = min(k, n);

  ll ans = 0;
  // 0からn個とるとるのを試す。これはidxじゃないので<=nに注意
  for (int a = 0; a <= n; a++) {
    for (int b = 0; b <= n; b++) {
      if (a + b > lim) continue;

      vector<ll> t;

      // aは左から
      for (int i = 0; i < a; i++) {
        t.push_back(v[i]);
      }

      // bは右から
      for (int i = 0; i < b; i++) {
        t.push_back(v[n - 1 - i]);
      }

      ll sum = 0;
      sort(all(t));
      for (int i = 0; i < a + b; i++) {
        if (i < k - (a + b) && t[i] < 0) {
          sum += 0;
        } else {
          sum += t[i];
        }
      }

      ans = max(sum, ans);
    }
  }

  cout << ans << ln;

  return 0;
}
