#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x;
  cin >> x;

  int ans = x;
  for (int i = 0; i < 2; i++) {
    ans = sqrt(ans);
  }

  cout << ans << endl;

  return 0;
}