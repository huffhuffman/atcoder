#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

ll rec(ll idx) {
  if (idx == 0 || idx == 1) {
    return 100;
  }

  if (idx == 2) {
    return 200;
  }

  return rec(idx - 1) + rec(idx - 2) + rec(idx - 3);
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll ans = rec(19);

  cout << ans << ln;

  return 0;
}