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

  ll x;
  cin >> x;

  ll ans = 1;
  while (1) {
    if (ans * x % 360 == 0) {
      break;
    }

    ans++;
  }

  cout << ans << ln;

  return 0;
}