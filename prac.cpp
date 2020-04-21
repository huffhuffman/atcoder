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

  ll n, l;
  cin >> n >> l;
  string s;
  cin >> s;

  ll ans = 0;
  ll curr = 1;
  for (int i = 0; i < n; i++) {
    if (s[i] == '+') {
      curr++;
    } else if (curr > 1) {
      curr--;
    }

    if (curr > l) {
      ans++;
      curr = 1;
    }
  }

  cout << ans << ln;

  return 0;
}