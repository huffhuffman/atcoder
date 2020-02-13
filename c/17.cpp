#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int l[n], r[n], s[n];
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i] >> s[i];
    l[i]--;
    r[i]--;
  }

  ll sum = 0;
  ll arr[m];
  memset(arr, 0, sizeof(arr));
  for (int i = 0; i < n; i++) {
    int L = l[i];
    int R = r[i];

    arr[L] += s[i];
    arr[R + 1] -= s[i];

    sum += s[i];
  }

  ll min_el = arr[0];
  for (int i = 0; i < m - 1; i++) {
    arr[i + 1] += arr[i];
    min_el = min(min_el, arr[i + 1]);
  }

  ll ans = sum - min_el;

  cout << ans << endl;

  return 0;
}