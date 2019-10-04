#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int len = s.size();

  sort(s.begin(), s.end());
  s.erase(unique(s.begin(), s.end()), s.end());

  int uniqLen = s.size();

  cout << (len == uniqLen ? "yes" : "no") << endl;

  return 0;
}