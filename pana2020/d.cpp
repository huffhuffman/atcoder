#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int n;

void dfs(string s, char lim) {
  if (s.size() >= n) {
    cout << s << ln;
    return;
  }

  for (char c = 'a'; c <= lim; c++) {
    char next = c == lim ? lim + 1 : lim;
    dfs(s + c, next);
  }

  return;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> n;

  dfs("", 'a');

  return 0;
}