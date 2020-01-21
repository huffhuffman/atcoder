#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  string ans1 = "";
  string ans2 = "";

  for (int i = 0; i < b; i++) {
    ans1 += to_string(a);
  }

  for (int i = 0; i < a; i++) {
    ans2 += to_string(b);
  }

  string ans = ans1;
  if (ans1 > ans2) {
    ans = ans2;
  }

  cout << ans << endl;

  return 0;
}