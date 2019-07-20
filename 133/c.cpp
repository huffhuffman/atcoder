#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int l, r;

  cin >> l >> r;

  int res = 2019;

  int mod = 2019;

  for (int i = l; i < r; i++) {
    int modI = i % 2019;
    int modJ = (i + 1) % 2019;
    int modIJ = modI * modJ % 2019;

    mod = mod > modIJ ? modIJ : mod;
  }

  cout << mod << endl;
  return 0;
}