#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  set<char> a;
  for (char c : s) {
    a.insert(c);
  }

  string ans = "None";
  for (char i = 'a'; i <= 'z'; i++) {
    if (a.find(i) == a.end()) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}