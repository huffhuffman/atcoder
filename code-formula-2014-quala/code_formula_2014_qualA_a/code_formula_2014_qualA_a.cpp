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

  ll n;
  cin >> n;

  string ans = "NO";
  for (int i = 1; i <= n; i++) {
    if (n == i * i * i) {
      ans = "YES";
      break;
    }
  }

  cout << ans << ln;

  return 0;
}