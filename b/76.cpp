#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  int ans = 1;
  for (int i = 0; i < n; i++) {
    int a = ans * 2;
    int b = ans + k;

    ans = min(a, b);
  }

  cout << ans << endl;

  return 0;
}