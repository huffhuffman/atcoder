#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  string ans = "NO";
  for (int i = 1; i <= b; i++) {
    int mod = i * a % b;

    if (mod == c) ans = "YES";
  }

  cout << ans << endl;

  return 0;
}