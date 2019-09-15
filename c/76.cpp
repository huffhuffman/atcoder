#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isT(string &sd, string &t, int idx) {
  if (idx + t.size() - 1 >= sd.size()) return false;

  for (int i = 0; i < t.size(); i++) {
    if (sd.at(i + idx) != t.at(i) && sd.at(i + idx) != '?') {
      return false;
    }
  }

  return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string sd, t;
  cin >> sd >> t;

  string ans = "";

  vector<int> tis;

  for (int i = 0; i < sd.size(); i++) {
    if (isT(sd, t, i)) {
      tis.push_back(i);
    }
  }

  if (tis.empty()) {
    ans = "UNRESTORABLE";
  } else {
    for (int i = 0; i < tis.size(); i++) {
      string cp = sd;
      int ti = tis.at(i);

      for (int j = 0; j < t.size(); j++) {
        cp.at(ti + j) = t.at(j);
      }

      for (int j = 0; j < cp.size(); j++) {
        if (cp.at(j) == '?') cp.at(j) = 'a';
      }

      if (ans == "") {
        ans = cp;
      } else {
        ans = ans > cp ? cp : ans;
      }
    }
  }

  cout << ans << endl;

  return 0;
}