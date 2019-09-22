#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  string ans = "";

  while (n != 0) {
    if (n % 2 != 0) {
      n--;
      ans = "1" + ans;
    } else {
      ans = "0" + ans;
    }
    n /= -2;
  }

  if (ans == "") ans = "0";

  cout << ans << endl;

  return 0;
}