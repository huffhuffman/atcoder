#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using t = tuple<ll, ll, ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

ll n, m, q;
vector<ll> a(55), b(55), c(55), d(55);

ll ans = 0;

void dfs(int idx, ll prev, vector<ll> &av) {
  if (idx == n) {
    ll sum = 0;
    for (int i = 0; i < q; i++) {
      // cout << av[i];
      if (av[b[i]] - av[a[i]] == c[i]) {
        sum += d[i];
      }
    }
    // cout << ln << sum << ln << ln;

    ans = max(sum, ans);

    return;
  }

  for (int i = prev; i <= m; i++) {
    vector<ll> cp = av;
    cp[idx] = i;
    dfs(idx + 1, i, cp);
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> n >> m >> q;

  for (int i = 0; i < q; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    a[i]--;
    b[i]--;
  }
  vector<ll> v(11);

  dfs(0, 1, v);

  cout << ans << ln;

  return 0;
}