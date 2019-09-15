#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int len;
int ans = 0;

void dfs(int i, int sum) {
  if (i > len) return;

  string s = to_string(sum);
  bool is3 = s.find('3') != string::npos;
  bool is5 = s.find('5') != string::npos;
  bool is7 = s.find('7') != string::npos;

  if ((is3 && is5 && is7) && sum <= n) {
    ans++;
  }

  dfs(i + 1, sum * 10 + 3);
  dfs(i + 1, sum * 10 + 5);
  dfs(i + 1, sum * 10 + 7);

  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;
  len = to_string(n).length();

  dfs(0, 0);

  cout << ans << endl;

  return 0;
}