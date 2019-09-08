#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  string s;
  cin >> n >> k >> s;

  int init = 0;
  for (int i = 0; i < n - 1; i++) {
    if (s.at(i) == s.at(i + 1)) {
      init++;
    }
  }

  cout << min(init + 2 * k, n - 1) << endl;

  return 0;
}