#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a, b, c, d;
vector<int> abcd;

string ans;

void dfs(int i, int sum, string op) {
  if (i == 3 && sum == 7) {
    ans = op;
    return;
  }

  if (i == 3) return;

  dfs(i + 1, sum + abcd[i + 1], op + "+");
  dfs(i + 1, sum - abcd[i + 1], op + "-");

  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  a = s.at(0) - '0';
  b = s.at(1) - '0';
  c = s.at(2) - '0';
  d = s.at(3) - '0';

  abcd = {a, b, c, d};

  dfs(0, a, "");

  cout << a << ans.at(0) << b << ans.at(1) << c << ans.at(2) << d << "=7"
       << endl;

  return 0;
}