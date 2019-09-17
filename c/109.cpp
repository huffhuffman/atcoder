#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, s;
  vector<int> x;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    int xi;
    cin >> xi;

    x.push_back(xi);
  }

  x.push_back(s);

  sort(x.begin(), x.end());

  int ans = -1;
  for (int i = 0; i < x.size() - 1; i++) {
    int diff = x.at(i + 1) - x.at(i);

    if (ans == -1) {
      ans = diff;
    } else {
      ans = __gcd(ans, diff);
    }
  }

  cout << ans << endl;

  return 0;
}