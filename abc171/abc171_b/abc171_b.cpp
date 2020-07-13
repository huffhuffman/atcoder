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

  ll k, n;
  cin >> n >> k;

  vector<ll> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  sort(all(p));

  ll ans = 0;
  for (int i = 0; i < k; i++) {
    ans += p[i];
  }

  cout << ans << ln;

  return 0;
}