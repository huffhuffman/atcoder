#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

ll a, b, x;

ll calc(ll num) { return a * num + b * to_string(num).size(); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> a >> b >> x;

  ll ub = 1e9 + 1;
  ll lb = 0;
  while (ub - lb > 1) {
    ll mid = (ub + lb) / 2;

    ll c = calc(mid);

    if (c > x) {
      // numが買えなかった場合
      ub = mid;  // 少なくともnum未満なことはわかる
    } else {
      // numが買えた場合
      lb = mid;  // 少なくともnum以上なことはわかる
    }
  }
  // ub - lb > 1 になった時点のlbがans

  cout << lb << endl;

  return 0;
}