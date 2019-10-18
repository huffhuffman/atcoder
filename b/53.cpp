#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int aIndex = 0;
  int zIndex = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A') {
      aIndex = i;
      break;
    }
  }

  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == 'Z') {
      zIndex = i;
      break;
    }
  }

  cout << zIndex - aIndex + 1 << endl;

  return 0;
}