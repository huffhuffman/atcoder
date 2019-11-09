#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string a, b, c;
  cin >> a >> b >> c;

  int ai = 0;
  int bi = 0;
  int ci = 0;

  char next = 'a';
  while (1) {
    if (next == 'a') {
      if (ai < a.size()) {
        next = a[ai];
        ai++;
      } else {
        break;
      }
    } else if (next == 'b') {
      if (bi < b.size()) {
        next = b[bi];
        bi++;
      } else {
        break;
      }
    } else {
      if (ci < c.size()) {
        next = c[ci];
        ci++;
      } else {
        break;
      }
    }
  }

  char ans = toupper(next);

  cout << ans << endl;

  return 0;
}