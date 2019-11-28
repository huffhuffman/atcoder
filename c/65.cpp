#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const ll MOD = 1000000007;

ll fact(ll num) {
  ll res = 1;

  for (int i = 2; i <= num; i++) {
    res = res * i % MOD;
  }

  return res;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, m;
  cin >> n >> m;

  ll diff = abs(n - m);

  ll ans;
  if (diff > 1) {
    ans = 0;
  } else {
    ans = fact(n) % MOD * fact(m) % MOD;
  }

  if(n == m) {
    ans = ans * 2 % MOD;
  }

  cout << ans << endl;

  return 0;
}