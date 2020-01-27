#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int h, n;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> h >> n;

  vector<P> v;

  map<ll, ll> mp;  // aダメージの最小コスト
  int maxDmg = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    v.push_back(P(b, a));

    if (maxDmg < a) {
      maxDmg = a;
    }

    mp[a] = b;
  }

  sort(v.begin(), v.end());
  int ans = 1000000000;
  for (int i = 0; i < n; i++) {
    // cout << v[i].second << ": " << v[i].first << endl;
    int d1 = v[i].second;
    int c1 = v[i].first;

    for (int j = i + 1; j < n; j++) {
      int d2 = v[j].second;
      int c2 = v[j].first;

      int ceiled = (d2 + d1 - 1) / d1;
      mp[d2] = min(c2, ceiled * c1);
    }
  }

  while (h > 0) {
    for (auto m : mp) {
      int dmg = m.first;
      int cost = m.second;

      if (h < dmg) {
        
      } 
      
    }
  }

  cout << ans << endl;

  return 0;
}