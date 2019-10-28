#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  if (a >= 1 && a <= 9 && b >= 1 && b <= 9) {
    cout << a * b << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}