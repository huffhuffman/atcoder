#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  ll tn = n;

  ll depth = 0;
  while (tn > 0) {
    tn /= 2;
    depth++;
  }

  ll x = 1;
  ll cnt = 0;
  while(x <= n) {
    x *= 2;
    if(cnt % 2 != depth % 2) {
      x++;
    }
    cnt++;
  }

  cout << (cnt % 2 == 0 ? "Takahashi" : "Aoki") << endl;

  return 0;
}