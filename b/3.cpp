#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  string s, t;
  cin >> s >> t;

  string ans = "You can win";

  set<char> st = {'a', 't', 'c', 'o', 'd', 'e', 'r', '@'};
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != t[i]) {
      if(s[i] == '@' || t[i] == '@') {
        if(st.find(s[i]) != st.end() && st.find(t[i]) != st.end()) {
          continue;
        }
      }

      ans = "You will lose";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}