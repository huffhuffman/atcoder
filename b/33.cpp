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
  vector<int> p(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i] >> p[i];
  }

  string ans = "atcoder";

  int sum = accumulate(p.begin(), p.end(), 0);
  for (int i = 0; i < n; i++) {
    if (p[i] > sum / 2) {
      ans = s[i];
    }
  }

  cout << ans << endl;

  return 0;
}