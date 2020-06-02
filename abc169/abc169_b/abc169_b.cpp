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
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll lim = 1;
  for (int i = 0; i < 18; i++) {
    lim *= 10;
  }

  ll ans = 1;
  bool ok = true;
  for (int i = 0; i < n; i++) {
    if(ans == 0) {
      break;
    }

    if (a[i] > (lim / ans)) {
      ans = -1;
      ok = false;
    }

    ans *= a[i];
  }

  if (ans == 0) {
    cout << ans << ln;
  } else {
    cout << (ok ? ans : -1) << ln;
  }

  return 0;
}