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
  vector<ll> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  ll ans = -1;
  for (int i = 2; i < n; i++) {
    ll sum = t[i] + t[i - 1] + t[i - 2];
    if (sum < k) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << ln;

  return 0;
}