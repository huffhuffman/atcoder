#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  string s;
  cin >> n >> s;

  string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZA";

  string ans = s;
  for (int i = 0; i < s.size(); i++) {
    char c = s[i];
    int idx = alp.find(c);
    ans[i] = alp[idx + n];
  }

  cout << ans << endl;

  return 0;
}