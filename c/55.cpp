#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll s, c;
  cin >> s >> c;

  ll ans = 0;

  ll hc = c / 2;

  if (hc > s) {
    ans += s;
    c -= s * 2;
    ans += c / 4;
  } else {
    ans += hc;
  }

  cout << ans << endl;

  return 0;
}