#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll a, b, x;
  cin >> a >> b >> x;

  ll countB = b / x + 1;
  ll countA = (a > 0 ? (a - 1) / x + 1 : a);

  cout << countB - countA << endl;

  return 0;
}