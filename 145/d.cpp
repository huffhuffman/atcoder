#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int mod = 1000000007, MAX = 200003, INF = 1 << 30;

ll rui(ll a, ll b) {
  ll ans = 1;
  while (b > 0) {
    if (b & 1) ans = ans * a % mod;
    a = a * a % mod;
    b /= 2;
  }
  return ans;
}

ll comb(ll a, ll b) {
  ll ans = 1;
  for (ll i = a; i > a - b; i--) {
    ans = ans * i % mod;
  }
  for (ll i = 1; i <= b; i++) {
    ans = (ans * rui(i, mod - 2)) % mod;
  }
  return ans;
}

int main() {
  int X, Y;
  cin >> X >> Y;
  if ((X + Y) % 3 != 0)
    cout << 0 << endl;
  else {
    int A = (X + Y) / 3;
    X -= A;
    Y -= A;
    if (X < 0 || Y < 0)
      cout << 0 << endl;
    else {
      cout << comb(A, X) << endl;
    }
  }
}
