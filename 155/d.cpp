#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr ll INF = ll(1e18) + 1;  // 1e18 は doubleなので整数に直す

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  ll l = -INF;
  ll r = INF;
  while (l + 1 < r) {
    ll x = (l + r) / 2; // 積
    bool ok = [&] {
      ll tot = 0;
      for (int i = 0; i < n; i++) {
        if(a[i] < 0) {
          // 負
          int l = -1, r = n;
          while(l + 1 < r) {
            int c = (l + r) / 2;
            if(a[c] * a[i] < x) {
              r = c;
            } else {
              l = c;
            }
          }
          tot += n - r;
        } else {
          // 正
          int l = -1, r = n;
          while(l + 1 < r) {
            int c = (l + r) / 2;
            if(a[c] * a[i] < x) {
              l = c;
            } else {
              r = c;
            }
          }
          tot += r;
        }
        if(a[i] * a[i] < x) {
          tot--; // 対角線の余計なカウントを消す
        }
      }
      tot /= 2; // 斜め半分の余計なカウントを消す
      return tot < k; // x未満な数の合計がk未満なやつの最大を探す
    }();

    if(ok) {
      l = x;
    } else {
      r = x;
    }
  }

  cout << l << endl;

  return 0;
}