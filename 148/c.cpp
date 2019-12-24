#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

ll lcm(ll x, ll y) { return (x * y) / __gcd(x, y); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;

  cout << lcm(a, b) << endl;

  return 0;
}