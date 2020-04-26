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

  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  string ans = "Yes";
  ll i = 0;
  while (a > 0 && c > 0) {
    if(i % 2 == 0) {
      c -= b;
    } else {
      a -= d;
    }

    if(a <= 0) {
      ans = "No";
      break;
    }

    if(c <= 0) {
      ans = "Yes";
      break;
    }

    i++;
  }

  cout << ans << ln;

  return 0;
}