#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;

void dfs(int i, string s) {
  if (i == n) {
    cout << s << endl;
    return;
  }

  dfs(i + 1, s + 'a');
  dfs(i + 1, s + 'b');
  dfs(i + 1, s + 'c');

  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  dfs(0, "");

  return 0;
}