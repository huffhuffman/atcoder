#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

ll sum(ll num) {
  if (num <= 1) {
    return 1;
  }

  return num + sum(num - 1);
}

int fact(int n) {
  int res = 1;

  for (int i = 2; i <= n; i++) {
    res = res * i;
  }

  return res;
}

int nCr(int n, int r) { return fact(n) / (fact(r) * fact(n - r)); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, p;
  cin >> n >> p;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int ecnt = count_if(all(a), [](int num) { return num % 2 == 0; });
  bool alleven = n == ecnt;
  ll ans = pow(2, n);
  if (alleven) {
    if (p) ans = 0;
  } else {
    ans = pow(2, n - 1);
  }

  cout << ans << endl;

  return 0;
}