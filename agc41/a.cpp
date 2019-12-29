#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, a, b;
  cin >> n >> a >> b;

  ll dist = abs(a - b);
  bool isEven = dist % 2 == 0;

  ll ans;
  if (isEven) {
    ans = dist / 2;
  } else {
    ans = min(a - 1, n - b) + (b - a - 1) / 2 + 1;
  }

  cout << ans << endl;

  return 0;
}