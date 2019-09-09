#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  int k;
  cin >> s >> k;

  set<string> subs;

  for (int i = 0; i < s.size(); i++) {
    string c{s.at(i)};
    subs.insert(c);
    for (int j = i + 1; j < s.size(); j++) {
      c += s.at(j);
      subs.insert(c);
      if (c.size() == k) {
        break;
      }
    }
  }

  int counter = 0;
  for (auto itr = subs.begin(); counter < k; ++itr, ++counter) {
    if (counter == k - 1) {
      cout << *itr << endl;
    }
  }

  return 0;
}