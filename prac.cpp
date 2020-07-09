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

  string s;
  cin >> s;
  ll len = s.size();
  ll ans = 0;
  for (int i = 0; i < len; i++) {
    if (i % 2 == 0) {
      ans += s[i] - '0';
    } else {
      ans -= s[i] - '0';
    }
  }

  cout << ans << ln;

  return 0;
}