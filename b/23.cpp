#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  string s;

  cin >> n >> s;

  int ans = -1;

  string acc = "";
  for (int i = 0; i <= n; i++) {
    if (i == 0) {
      acc = "b";
    } else if (i % 3 == 1) {
      acc = "a" + acc + "c";
    } else if (i % 3 == 2) {
      acc = "c" + acc + "a";
    } else {
      acc = "b" + acc + "b";
    }

    if (acc == s) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}