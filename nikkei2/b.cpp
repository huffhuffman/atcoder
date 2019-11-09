#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  ll MOD = 998244353;

  vector<ll> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  vector<ll> dc(n, 0);  // indexが距離, valが個数
  for (int i = 0; i < n; i++) {
    int dist = d[i];

    dc[dist]++;
  }

  ll ans = 1;
  for (int i = 0; i < n; i++) {
    int dist = d[i];

    if (i == 0 && dc[dist] == 1) {
      continue;
    } else if (i == 0 && dc[dist] != 1) {
      ans = 0;
      break;
    }

    int prevD = dist - 1;

    if(prevD < 0) {
      ans = 0;
      break;
    }

    ll prevc = dc[prevD] % MOD;

    if (prevc == 0) {
      ans = 0;
      break;
    }

    ans = (prevc * ans) % MOD;
  }

  cout << ans % MOD << endl;

  return 0;
}