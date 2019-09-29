#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h.at(i);
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (h.at(i) >= k) ans++;
  }

  cout << ans << endl;

  return 0;
}