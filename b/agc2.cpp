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

  ll n, m;
  cin >> n >> m;
  vector<ll> x(m), y(m);
  for (int i = 0; i < m; i++) {
    cin >> x[i] >> y[i];
    x[i]--;
    y[i]--;
  }
  vector<P> v(n);
  for (int i = 0; i < n; i++) {
    ll red = i == 0;
    ll cnt = 1;
    v[i] = P(red, cnt);
  }

  for (int i = 0; i < m; i++) {
    auto p = v[x[i]];
    ll red = p.first;
    ll cnt = p.second;

    if (cnt > 0) {
      v[y[i]].second++;
      v[x[i]].second--;
      if (red) {
        v[y[i]].first = 1;

        if (cnt == 1) {
          v[x[i]].first = 0;
        }
      }
    }
  }

  ll ans = count_if(all(v), [](P p) {
    ll red = p.first;

    return red > 0;
  });

  cout << ans << ln;

  return 0;
}