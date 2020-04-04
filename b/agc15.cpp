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

  ll n = s.size();

  ll ans = n * (n - 1);

  for (int i = 1; i < n - 1; i++) {
    if (s[i] == 'U') {
      // 自分の階より下の数
      ans += i;
    } else {
      // 自分の階より上の数
      ans += (n - 1) - i;
    }
  }

  cout << ans << ln;

  return 0;
}