#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int mx = *max_element(a.begin(), a.end());
  int mn = *min_element(a.begin(), a.end());

  cout << mx - mn << endl;

  return 0;
}