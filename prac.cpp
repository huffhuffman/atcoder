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

  vector<ll> e(6), l(6);
  ll b;
  for (int i = 0; i < 6; i++) {
    cin >> e[i];
  }
  cin >> b;
  for (int i = 0; i < 6; i++) {
    cin >> l[i];
  }

  ll cnt = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (l[i] == e[j]) {
        cnt++;
        break;
      }
    }
  }

  ll ans = 0;
  if (cnt == 6) {
    ans = 1;
  } else if (cnt == 5) {
    if (count(all(l), b) > 0) {
      ans = 2;
    } else {
      ans = 3;
    }
  } else if (cnt == 4) {
    ans = 4;
  } else if (cnt == 3) {
    ans = 5;
  }

  cout << ans << ln;

  return 0;
}