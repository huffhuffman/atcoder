#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string n;
  cin >> n;
  int k;
  cin >> k;

  int keta = n.size();

  ll ans = 0;
  if (k == 1) {
    char c = n[0];
    int t = c - '0';
    if (keta == 1) {
      ans = t;
    } else {
      ans = (keta - 1) * 9;
      ans += t;
    }
  } else {
    ll ncr = 1;
    ll nin = 1;
    for (int i = 0; i < k; i++) {
      ncr *= (keta - i);
      nin *= 9;
    }

    ncr /= k == 3 ? 6 : k;

    ll total = ncr * nin;

    for (int i = 0; i < keta; i++) {
      int cur = n[i] - '0';

      int ovr = 9 - cur;

      ovr *= pow(9, p);

      total -= ovr;
    }

    ans = total;
  }

  cout << ans << endl;

  return 0;
}