#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<string> s(n);
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
  }

  string x;
  cin >> x;

  ll ans = 0;
  bool ok = true;
  for (int i = 0; i < n; i++) {
    if (!ok) {
      ans += t[i];
    }

    if (s[i] == x) {
      ok = false;
    }
  }
  cout << ans << endl;

  return 0;
}