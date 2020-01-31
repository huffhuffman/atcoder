#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  regex re(R"(.+(?=FESTIVAL$))");
  smatch m;

  regex_search(s, m, re);

  cout << m.str() << endl;

  return 0;
}