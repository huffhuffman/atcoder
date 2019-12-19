#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  map<string, int> mp;
  for (int i = 0; i < n; i++) {
    mp[s[i]]++;
  }

  int maxx = 0;

  string ans = "";
  for (auto m : mp) {
    if (m.second >= maxx) {
      maxx = m.second;
      ans = m.first;
    }
  }

  cout << ans << endl;

  return 0;
}