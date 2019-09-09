#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  ll k;
  cin >> s >> k;
  ll len = s.size();

  ll count = k;
  for (int i = 0; i < len; i++) {
    char c = s.at(i);
    int num = c - '0';

    if (count == 1) {
      cout << num << endl;
      break;
    }

    if (num == 1) {
      --count;
    } else {
      cout << num << endl;
      break;
    }
  }

  return 0;
}