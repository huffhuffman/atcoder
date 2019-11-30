#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  s += '+';

  int ans = 0;

  bool seq0 = false;

  for (int i = 0; i < s.size() - 1; i += 2) {
    int num = s[i] - '0';
    char op = s[i + 1];

    if (num == 0) {
      seq0 = true;
    }

    if (op == '+') {
      if (!seq0) {
        ans++;
      }
      seq0 = false;
    }
  }

  cout << ans << endl;

  return 0;
}