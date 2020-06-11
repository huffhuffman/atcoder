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

  ll i = 1;
  ll d = 1;
  while (n > 1) {
    if (i < 9) {
      i++;
    } else {
      i = 1;
      d++;
    }

    n--;
  }

  string ans = string(d, '0' + i);

  cout << ans << ln;

  return 0;
}