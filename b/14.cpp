#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  int n, x;
  cin >> n >> x;

  int a[100];

  memset(a, 0, sizeof(a));

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (x & (1 << i)) {
      ans += a[i];
    }
  }

  cout << ans << endl;

  return 0;
}