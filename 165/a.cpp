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

  ll k, a, b;
  cin >> k >> a >> b;

  string ans = "NG";
  for (int i = a; i <= b; i++) {
    if (i % k == 0) {
      ans = "OK";
      break;
    }
  }

  cout << ans << ln;

  return 0;
}