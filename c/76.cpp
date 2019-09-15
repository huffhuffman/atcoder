#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string no = "UNRESTORABLE";

  string sd, t;
  cin >> sd >> t;

  int ti = -1;
  int tRevi = 0;

  for (int i = 0; i < sd.size(); i++) {
    char cs = sd.at(sd.size() - 1 - i);  // sdを後ろから

    char ct = t.at(t.size() - 1 - tRevi);  // tを後ろから

    if (cs == ct || cs == '?') {  // 一致、または?なら次のt
      if (tRevi == t.size() - 1) {
        ti = sd.size() - 1 - i;
        break;
      }

      tRevi++;
    } else {
      tRevi = 0;
    }
  }

  if (ti == -1) {
    cout << no << endl;

    return 0;
  }

  string s = sd;
  for (int i = 0; i < t.size(); i++) {
    char c = t.at(i);

    s.at(ti + i) = c;
  }

  for (int i = 0; i < s.size(); i++) {
    if (s.at(i) == '?') {
      s.at(i) = 'a';
    }
  }

  cout << s << endl;

  return 0;
}