#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n = 10;

  int f[n];

  f[0] = 1;
  f[1] = 1;

  for (int i = 2; i < n; i++) {
    int v = f[i - 1] + f[i - 2];
    f[i] = v;
  }

  for (int i = 0; i < n; i++) {
    cout << f[i] << endl;
  }

  return 0;
}
