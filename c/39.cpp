#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string p = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";

  vector<string> scl = {"Do", "",   "Re", "",   "Mi", "Fa",
                        "",   "So", "",   "La", "",   "Si"};

  string s;
  cin >> s;

  string ans;
  for (int i = 0; i < 12; i++) {
    bool found = true;
    for (int j = 0; j < 20; j++) {
      if (s[j] != p[j + i]) {
        found = false;
        break;
      }
    }

    if (found) {
      ans = scl[i];
      break;
    }
  }

  cout << ans << endl;

  return 0;
}