#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int k, x;
  cin >> k >> x;

  string ans;
  if (500 * k >= x) {
    ans = "Yes";
  } else {
    ans = "No";
  }

  cout << ans << endl;

  return 0;
}