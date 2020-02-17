#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b ,c;
  cin >> a >> b >> c;

  set<int> s;
  s.insert(a);
  s.insert(b);
  s.insert(c);

  cout << (s.size() == 2 ? "Yes" : "No") << endl;

  return 0;
}