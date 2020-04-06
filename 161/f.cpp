#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

// 1以外の約数列挙
auto cntN(ll num) {
  ll n = num;
  set<ll> s;
  s.insert(num);
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      s.insert(i);
      if (i * i != n) s.insert(n / i);
    }
  }

  return s;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  if(n == 2) {
    cout << 1 << ln;
    return 0;
  }

  // まず n - 1 の約数をカウント
  ll ans = cntN(n - 1).size();
  // cout << ans << ln;

  // nの約数を取得、割り切れなくなるまで n / k を繰り返して mod k が
  // 1になるか調べる
  auto st = cntN(n);
  for (auto k : st) {
    // cout << "k: " << k << ln;
    ll num = n;
    while (num % k == 0) {
      num /= k;
    }
    // cout << "num: " << num << ln;
    if (num % k == 1) {
      ans++;
    }
  }

  cout << ans << ln;

  return 0;
}
