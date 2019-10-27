#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll d, g;
  cin >> d >> g;

  vector<int> p(d), c(d);
  for (int i = 0; i < d; i++) {
    cin >> p[i] >> c[i];
  }

  vector<int> v(d);
  for (int i = 0; i < d; i++) {
    v[i] = i;
  }

  ll ans = -1;
  do {
    ll count = 0;
    ll r = g;  // remains
    for (int i = 0; i < d; i++) {
      int idx = v[i];

      int pi = p[idx];
      int ci = c[idx];
      int score = 100 * (idx + 1);

      if (pi * score >= r) {
        count += ceil((double)r / score);
        break;
      } else if (pi * score + ci >= r) {
        count += pi;
        break;
      } else {
        r -= (pi * score + ci);
        count += pi;
      }
    }

    if (ans == -1) {
      ans = count;
    } else {
      ans = min(ans, count);
    }
  } while (next_permutation(v.begin(), v.end()));

  cout << ans << endl;

  return 0;
}