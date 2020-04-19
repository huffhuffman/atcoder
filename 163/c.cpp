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

  vector<ll> a(n);
  for (int i = 1; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }

  vector<vector<ll>> g(n);
  for (int i = 1; i < n; i++) {
    ll boss = a[i];

    g[boss].push_back(i);
  }

  for (int i = 0; i < n; i++) {
    ll cnt = g[i].size();
    cout << cnt << ln;
  }

  return 0;
}