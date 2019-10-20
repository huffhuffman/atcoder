#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int solve(string s) {
  vector<vector<char>> runs;

  vector<char> tmp;
  for (int i = 0; i < s.size(); i++) {
    if (tmp.size() < 1 || tmp.back() == s[i]) {
      tmp.push_back(s[i]);
    } else {
      runs.push_back(tmp);

      tmp.clear();
      tmp.push_back(s[i]);
    }

    if (i == s.size() - 1) {
      runs.push_back(tmp);
    }
  }

  return (int)runs.size();
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  string s;
  cin >> n >> s;

  cout << solve(s) << endl;

  return 0;
}