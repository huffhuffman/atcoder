#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  ll s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  for (int i = 0; i < n; i++) {
    if (s[i] == 0) {
      cout << n << endl;
      return 0;
    }
  }

  int r = 0;
  int prd = 1;
  int ans = 0;
  for (int l = 0; l < n; l++) {
    while (r < n && prd * s[r] <= k) {
      prd *= s[r];
      r++;
    }
    // ここに来た時点で r が1個多いので r - l に +1 する必要がない
    ans = max(ans, r - l);
    if (l == r) {
      r++;
    } else {
      prd /= s[l];
    }
  }

  cout << ans << endl;

  return 0;
}