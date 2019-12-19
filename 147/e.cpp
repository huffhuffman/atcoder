#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  regex r("hoge?");
  string s = "hogasdfasdfhogasdf";

  smatch m;
  bool res = regex_search(s, m, r);

  cout << m.str() << endl;

  return 0;
}