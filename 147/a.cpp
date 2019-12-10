#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  string ans = "bust";
  if (a + b + c <= 21) {
    ans = "win";
  }

  cout << ans << endl;

  return 0;
}