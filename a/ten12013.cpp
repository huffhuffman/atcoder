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

  ll n;
  cin >> n;
  vector<ll> v[n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) {
      ll t;
      cin >> t;
      v[i].push_back(t);
    }
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ll sum = 0;
    for (int j = 0; j < 5; j++) {
      sum += v[i][j];
    }

    if (sum >= 0 && sum < 20) {
      ans++;
    }
  }

  cout << ans << ln;

  return 0;
}