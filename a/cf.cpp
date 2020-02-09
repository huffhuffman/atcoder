#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  regex re(R"(C.*F.*)");

  smatch m;

  bool ok = regex_search(s, m, re);

  cout << (ok ? "Yes" : "No") << endl;

  return 0;
}