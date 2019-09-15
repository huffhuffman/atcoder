#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;

  bool ans = true;

  map<char, int> sUniqs, tUniqs;
  for (int i = 0; i < s.size(); i++) {
    char sc = s.at(i);
    char tc = t.at(i);

    sUniqs[sc]++;
    tUniqs[tc]++;

    if (sUniqs[sc] != tUniqs[tc]) {
      ans = false;
      break;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}