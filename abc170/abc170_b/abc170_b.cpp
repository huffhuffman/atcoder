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

  ll x, y;
  cin >> x >> y;

  string ans = "No";
  for (int i = 0; i <= 100; i++) {
    for (int j = 0; j <= 100; j++) {
      if (i * 2 + j * 4 == y && i + j == x) {
        ans = "Yes";
      }
    }
  }

  cout << ans << ln;

  return 0;
}