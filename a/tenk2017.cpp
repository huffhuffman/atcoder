#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int cnt = count(s.begin(), s.end(), '1');

  cout << cnt << endl;

  return 0;
}