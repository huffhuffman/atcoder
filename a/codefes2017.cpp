#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  regex exp(R"(^YAKI)");

  string ans = "No";
  if (regex_search(s, exp)) {
    ans = "Yes";
  }

  cout << ans << endl;

  return 0;
}