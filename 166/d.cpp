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

  ll x;
  cin >> x;

  for (ll a = -1000; a < 1000; a++) {
    for (ll b = -1000; b < 1000; b++) {
      if (pow(a, 5) - pow(b, 5) == x) {
        cout << a << " " << b << ln;
        return 0;
      }
    }
  }

  return 0;
}