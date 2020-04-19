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
  vector<ll> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  ll ans = -1;
  ll total = accumulate(all(a), 0);

  if (total > n) {
    ans = -1;
  } else {
    ans = n - total;
  }

  cout << ans << ln;

  return 0;
}