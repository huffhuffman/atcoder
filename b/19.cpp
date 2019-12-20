#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

string getRuns(string s) {
  string runs = "";

  string tmp = "";
  for (int i = 0; i < s.size(); i++) {
    if (tmp.size() < 1 || tmp.back() == s[i]) {
      tmp += s[i];
    } else {
      runs += tmp[0];
      runs += to_string(tmp.size());

      tmp = "";
      tmp += s[i];
    }

    if (i == s.size() - 1) {
      runs += tmp[0];
      runs += to_string(tmp.size());
    }
  }

  return runs;
}


int main() {
  string s;
  cin >> s;

  cout << getRuns(s) << endl;

  return 0;
}