#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  string r = "CODEFESTIVAL2016";
  int ans = 0;
  for (int i = 0; i < r.size(); i++) {
    if (r[i] != s[i]) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}