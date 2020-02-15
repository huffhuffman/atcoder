#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int R, C, k;
  cin >> R >> C >> k;

  int n;
  cin >> n;

  int r[n], c[n];
  for (int i = 0; i < n; i++) {
    cin >> r[i] >> c[i];
    r[i]--;
    c[i]--;
  }

  vector<ll> sum_r(R, 0); // sum_r[i] := i行目のアメの合計
  vector<ll> sum_c(C, 0); // sum_c[i] := i列目のアメの合計
  for (int i = 0; i < n; i++) {
    sum_r[r[i]]++;
    sum_c[c[i]]++;
  }

  vector<ll> dp_r(n + 1), dp_c(n + 1);
  for (int i = 0; i < R; i++) {
    dp_r[sum_r[i]]++;
  }

  for (int i = 0; i < C; i++) {
    dp_c[sum_c[i]]++;
  }

  ll ans = 0;
  for (int i = 0; i <= k; i++) {
    ans += dp_r[i] * dp_c[k - i];
  }

  for (int i = 0; i < n; i++) {
    ll total = sum_r[r[i]] + sum_c[c[i]];
    if(total == k) {
      ans--;
    }

    if(total == k + 1) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}