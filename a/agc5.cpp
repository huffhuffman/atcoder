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

  string x;
  cin >> x;

  ll len = x.size();

  stack<ll> s;

  ll ans = 0;
  for (int i = 0; i < len; i++) {
    if (x[i] == 'S') {
      s.push(i);
    } else if(!s.empty()) {
      s.pop();
    } else {
      ans++;
    }
  }

  ans += s.size();

  cout << ans << ln;

  return 0;
}