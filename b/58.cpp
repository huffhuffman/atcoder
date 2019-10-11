#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string o, e;
  cin >> o >> e;

  string ans = "";
  for (int i = 0; i < o.size(); i++) {
    ans += o[i];

    if (i >= e.size()) break;

    ans += e[i];
  }

  cout << ans << endl;

  return 0;
}