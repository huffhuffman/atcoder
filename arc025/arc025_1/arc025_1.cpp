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

  vector<ll> d(7), j(7);
  for (int i = 0; i < 7; i++) {
    cin >> d[i];
  }
  for (int i = 0; i < 7; i++) {
    cin >> j[i];
  }

  ll ans = 0;
  for (int i = 0; i < 7; i++) {
    if (d[i] > j[i]) {
      ans += d[i];
    } else {
      ans += j[i];
    }
  }

  cout << ans << ln;

  return 0;
}