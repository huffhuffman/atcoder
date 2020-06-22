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

  ll l, r;
  cin >> l >> r;
  vector<ll> L(l), R(r);
  for (int i = 0; i < l; i++) {
    cin >> L[i];
  }
  for (int i = 0; i < r; i++) {
    cin >> R[i];
  }

  ll ans = 0;
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < r; j++) {
      if (L[i] == R[j]) {
        R[j] = -1;
        ans++;
        break;
      }
    }
  }

  cout << ans << ln;

  return 0;
}