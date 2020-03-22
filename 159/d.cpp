#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

ll nCk(int n, int k) {
  ll x = 1, y = 1;
  for (int i = 0; i < k; i++) {
    x *= n - i;
    y *= i + 1;
  }
  return x / y;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<ll> dp(n + 100, 0);
  map<ll, ll> m;
  for (int i = 0; i < n; i++) {
    m[a[i]]++;
  }

  for (auto p : m) {
    ll i = p.first;
    ll v = p.second;

    dp[i] = nCk(v, 2);
  }

  ll total = 0;
  for (int i = 0; i <= n; i++) {
    total += dp[i];
  }

  for (int i = 0; i < n; i++) {
    m[a[i]]--;
    cout << nCk(m[a[i]], 2) + total - dp[a[i]] << ln;
    m[a[i]]++;
  }

  return 0;
}