#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  string s = to_string(n);
  int ans = 0;
  for (int i = 0; i < 4; i++) {
    if (s[i] == '2') ans++;
  }

  cout << ans << endl;

  return 0;
}