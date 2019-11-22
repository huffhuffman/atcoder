#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  int k;
  cin >> s >> k;

  set<string> st;

  if (k > s.size()) {
    cout << 0 << endl;
  } else {
    for (int i = 0; i <= s.size() - k; i++) {
      string t = "";
      for (int j = 0; j < k; j++) {
        t += s[i + j];
      }
      st.insert(t);
    }

    cout << st.size() << endl;
  }

  return 0;
}