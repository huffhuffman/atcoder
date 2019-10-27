#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int a = 2025;

  int diff = a - n;

  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      if (i * j == diff) {
        cout << i << " "
             << "x"
             << " " << j << endl;
      }
    }
  }

  return 0;
}