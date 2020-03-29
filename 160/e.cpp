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

  ll x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;
  priority_queue<ll> p, q, r;
  for (int i = 0; i < a; i++) {
    ll t;
    cin >> t;
    p.push(t);
  }
  for (int i = 0; i < b; i++) {
    ll t;
    cin >> t;
    q.push(t);
  }
  for (int i = 0; i < c; i++) {
    ll t;
    cin >> t;
    r.push(t);
  }

  for (int i = 0; i < x; i++) {
    r.push(p.top());
    p.pop();
  }
  for (int i = 0; i < y; i++) {
    r.push(q.top());
    q.pop();
  }

  ll ans = 0;
  for (int i = 0; i < x + y; i++) {
    ans += r.top();
    r.pop();
  }

  cout << ans << ln;

  return 0;
}