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

  ll n, a, b;
  cin >> n >> a >> b;

  int i = 0;
  while (n > 0) {
    if (i % 2 == 0) {
      n -= a;
    } else {
      n -= b;
    }
    i++;
  }

  string ans = "Bug";
  if (i % 2) {
    ans = "Ant";
  }

  cout << ans << ln;

  return 0;
}