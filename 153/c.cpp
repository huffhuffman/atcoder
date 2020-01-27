#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;

  vector<ll> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  sort(h.rbegin(), h.rend());

  ll ans = 0;
  if (n <= k) {
    cout << ans << endl;
  } else {
    for (int i = 0; i < k; i++) {
      h[i] = 0;
    }

    for (int i = 0; i < n; i++) {
      ans += h[i];
    }

    cout << ans << endl;
  }

  return 0;
}