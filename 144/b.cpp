#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  set<int> mul;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      mul.insert(i * j);
    }
  }

  string ans = "No";
  if (mul.find(n) != mul.end()) {
    ans = "Yes";
  }

  cout << ans << endl;

  return 0;
}