#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string a, b;
  cin >> a >> b;

  int ans = (stoi(a + b)) * 2;

  cout << ans << endl;

  return 0;
}