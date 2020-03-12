#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
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

  vector<ll> h(n), s(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i] >> s[i];
  }

  auto check = [&](ll mid) {
    bool ok = true;
    vector<double> t(n);
    for (int i = 0; i < n; i++) {
      if (mid < h[i]) {
        return false;
      } else {
        t[i] = (mid - h[i]) / static_cast<double>(s[i]);
      }
    }
    sort(all(t));
    for (int i = 0; i < n; i++) {
      if (t[i] < i) {
        return false;
      }
    }
    return true;
  };

  ll lb = 0;
  ll ub = numeric_limits<ll>::max() / 2;

  while (lb + 1 < ub) {
    ll mid = (lb + ub) / 2;

    bool ok = check(mid);
    if (ok) {
      ub = mid;
    } else {
      lb = mid;
    }
  }

  cout << ub << ln;

  return 0;
}