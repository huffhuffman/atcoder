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

  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll sum = 0;
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];

    if (sum >= k) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << ln;

  return 0;
}