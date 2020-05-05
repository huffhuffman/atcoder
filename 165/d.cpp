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

  ll a, b, n;
  cin >> a >> b >> n;

  ll t = b - 1;
  if(t > n) {
    t = n;
  }
  ll ans = (a * t / b) - (a * (t / b));

  cout << ans << ln;

  return 0;
}