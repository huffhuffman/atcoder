#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  string s;
  cin >> s;

  int r = count(s.begin(), s.end(), 'R');
  int b = count(s.begin(), s.end(), 'B');

  cout << (r > b ? "Yes" : "No") << endl;

  return 0;
}