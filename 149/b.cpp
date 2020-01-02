#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll a, b, k;
  cin >> a >> b >> k;

  ll ka = max(k - a, 0LL);

  a = max(a - k, 0LL);

  b = max(b - ka, 0LL);

  cout << a << " " << b << endl;

  return 0;
}