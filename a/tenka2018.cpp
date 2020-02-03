#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  if (s.size() > 2) {
    reverse(s.begin(), s.end());
  }
  cout << s << endl;

  return 0;
}