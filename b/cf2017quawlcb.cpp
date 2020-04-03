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
  vector<int> a(n);
  ll o = 1;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] % 2 == 0) {
      o *= 2;
    }
  }

  ll total = pow(3, n);

  ll ans = total - o;

  cout << ans << ln;

  return 0;
}

/*
o * o = o
o * e = e
e * e = e
*/