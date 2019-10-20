#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;

      ans += d[i] * d[j];
    }
  }

  cout << ans / 2 << endl;

  return 0;
}