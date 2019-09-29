#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  string t1 = "erase";
  string t2 = "eraser";
  string t3 = "dreamer";
  string t4 = "dream";

  vector<bool> ok(s.size() + 1, 0);
  ok.at(0) = true;

  for (int i = 0; i < s.size(); i++) {
    if (!ok.at(i)) continue;

    if (s.size() >= i + 5 && (s.substr(i, 5) == t1 || s.substr(i, 5) == t4))
      ok.at(i + 5) = true;
    if (s.size() >= i + 6 && s.substr(i, 6) == t2) ok.at(i + 6) = true;
    if (s.size() >= i + 7 && s.substr(i, 7) == t3) ok.at(i + 7) = true;
  }

  cout << (ok.at(s.size()) ? "YES" : "NO") << endl;

  return 0;
}