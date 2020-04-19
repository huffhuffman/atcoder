#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

vector<P> getPrimeFactors(ll n) {
  vector<P> p;

  if (n == 0) return p;

  p.push_back(P(1, 1));

  ll num = n;
  for (ll i = 2; i * i <= n; i++) {
    if (num % i != 0) continue;

    ll cnt = 0;

    while (num % i == 0) {
      num /= i;
      cnt++;
    }

    p.push_back(P(i, cnt));

    if (num == 1) break;
  }

  if (num != 1) {
    p.push_back(P(num, 1));
  }

  return p;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, p;
  cin >> n >> p;

  auto v = getPrimeFactors(p);

  ll ans = 1;
  for (auto pr : v) {
    ll num = pr.first;
    ll cnt = pr.second;

    for (int j = 0; j < cnt / n; j++) {
      ans *= num;
    }
  }

  cout << ans << ln;

  return 0;
}