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

  ll n, k;
  cin >> n >> k;
  vector<ll> d(k);
  vector<vector<ll>> a(k, vector<ll>(200, -1));
  vector<ll> s(n);
  for (int i = 0; i < k; i++) {
    cin >> d[i];
    for (int j = 0; j < d[i]; j++) {
      cin >> a[i][j];
      a[i][j]--;
    }
  }

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < 200; j++) {
      if (a[i][j] < 0) continue;

      s[a[i][j]]++;
    }
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 0) {
      ans++;
    }
  }

  cout << ans << ln;

  return 0;
}