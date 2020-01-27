#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

ll calc(ll num, ll cnt) {
  if (num <= 1) {
    return cnt + 1;
  }

  ll half = num / 2;
  return calc(half, cnt) * 2 + 1;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll h;
  cin >> h;

  cout << calc(h, 0) << endl;

  return 0;
}