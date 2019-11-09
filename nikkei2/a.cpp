#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  set<P> s;

  for (int i = 1; i <= n; i++) {
    if (i != n - i) {
      int a = i;
      int b = n - i;
      if(a == 0 || b == 0) continue;
      if (a < b) swap(a, b);

      s.insert(P(a, b));
    }
  }

  int ans = s.size();

  cout << ans << endl;

  return 0;
}