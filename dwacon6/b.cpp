#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

ll fact(int n) {
  ll res = 1;

  for (int i = 2; i <= n; i++) {
    res = res * i % MOD;
  }

  return res % MOD;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> x(n);
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    m[x[i]] = i;
  }

  reverse(x.begin(), x.end());

  ll sum = 0;

  ll n1f = fact(n - 1);
  for (int i = 0; i < n; i++) {
    ll num = x[i] * n1f / (i + 1);
    sum += num;
  }


  ll ans = sum % MOD * fact(n - 2) % MOD;

  cout << ans << endl;

  return 0;
}