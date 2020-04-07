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
  deque<ll> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    b[i]--;
  }

  ll cnt = 0;
  stack<ll> ans;

  while (!b.empty()) {
    ll erase_target = -1;
    for (int i = 0; i < b.size(); i++) {
      if (b[i] == i) {
        erase_target = i;
      }
    }

    if (erase_target == -1) {
      cout << -1 << ln;
      return 0;
    } else {
      ans.push(b[erase_target]);
      b.erase(b.begin() + erase_target);
    }

    cnt++;
  }

  while (!ans.empty()) {
    cout << ans.top() + 1 << ln;
    ans.pop();
  }

  return 0;
}