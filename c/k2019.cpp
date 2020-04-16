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
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  priority_queue<ll> need, over;
  for (int i = 0; i < n; i++) {
    if (a[i] < b[i]) {
      need.push(b[i] - a[i]);
    } else {
      over.push(a[i] - b[i]);
    }
  }

  ll ans = 0;

  ll prev = 0;
  while (!need.empty()) {
    ll t = need.top();
    need.pop();
    ans++;

    while (prev < t && !over.empty()) {
      prev += over.top();
      over.pop();
      ans++;
    }

    if (t > prev) {
      ans = -1;
      break;
    }

    prev -= t;
  }

  cout << ans << ln;

  return 0;
}