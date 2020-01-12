#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  map<int, int> mp;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]] = 0;
  }

  int idx = 0;
  for (auto m : mp) {
    mp[m.first] = idx;
    idx++;
  }

  for (int i = 0; i < n; i++) {
    cout << mp[a[i]] << endl;
  }

  return 0;
}