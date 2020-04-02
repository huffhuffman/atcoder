#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  ll ans = 0;
  if (a == b && b == c) {
    ans = a % 2 == 0 && b % 2 == 0 && c % 2 == 0 ? -1 : 0;
  } else {
    while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
      int ta = a / 2;
      int tb = b / 2;
      int tc = c / 2;
      a = tb + tc;
      b = ta + tc;
      c = ta + tb;
      ans++;
    }
  }

  cout << ans << ln;

  return 0;
}