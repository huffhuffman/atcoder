#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = n;
  for (int i = 1; i <= sqrt(n); i++) {
    int sqd = n - i * i;
    int rectd = n - (n / i) * i + abs(n / i - i);

    ans = min(ans, min(sqd, rectd));
  }

  cout << ans << endl;

  return 0;
}