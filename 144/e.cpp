#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;

  vector<int> a(n), f(n);
  priority_queue<int> apq, fpq;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    apq.push(a[i]);
  }
  for (int i = 0; i < n; i++) {
    cin >> f[i];
    fpq.push(f[i]);
  }

  ll ans = -1;
  for (int i = 0; i < n; i++) {
    int ai = apq.top();
    apq.pop();

    int fi = fpq.top();
    fpq.pop();

    if (k >= ai) {
      k -= ai;
      ai = 0;
    } else if (k >= 0) {
      ai -= k;
      k = 0;
    }

    ll cost = ai * fi;

    if (ans == -1) {
      ans = cost;
    } else {
      ans = max(ans, cost);
    }
  }

  cout << ans << endl;

  return 0;
}