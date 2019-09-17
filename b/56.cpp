#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int w, a, b;
  cin >> w >> a >> b;

  if (a > b) swap(a, b);

  int ans = b - (a + w);

  cout << (ans <= 0 ? 0 : ans) << endl;

  return 0;
}