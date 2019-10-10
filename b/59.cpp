#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string a, b;
  cin >> a >> b;

  int lenA = a.size();
  int lenB = b.size();

  string ans;
  if (lenA > lenB) {
    ans = "GREATER";
  } else if (lenA < lenB) {
    ans = "LESS";
  } else {
    ans = "EQUAL";
    for (int i = 0; i < a.size(); i++) {
      int ai = (int)a[i];
      int bi = (int)b[i];

      if (ai == bi) continue;

      if (ai > bi) {
        ans = "GREATER";
      } else {
        ans = "LESS";
      }

      break;
    }
  }

  cout << ans << endl;

  return 0;
}