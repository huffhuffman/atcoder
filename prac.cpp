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

  vector<ll> ans(n + 1);
  ans[0] = 1;
  ans[1] = 1;
  for (int i = 2; i <= n; i++) {
    ans[i] = ans[i - 1] + ans[i - 2];
  }

  cout << ans[n] << ln;

  return 0;
}