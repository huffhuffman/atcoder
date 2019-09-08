#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;

  cin >> s;

  int count = 0;
  for (int i = 0; i < 3; i++) {
    count += s[i] == '1' ? 1 : 0;
  }

  cout << count << endl;

  return 0;
}