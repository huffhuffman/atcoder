#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x;
  cin >> x;

  int ans;

  for (int i = 1; i <= x; i++) {
    int val = ((i + 1) * i) / 2;

    if (val >= x) {
      ans = i;
      break;
    }
  }

  cout << min(ans, x) << endl;

  return 0;
}