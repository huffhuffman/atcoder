#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int n, n1, n2, n3;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> n >> n1 >> n2 >> n3;

  auto isNG = [](int num) { return num == n1 || num == n2 || num == n3; };

  string ans = "NO";

  for (int i = 0; i < 101; i++) {
    if (i == 0) {
      if (isNG(n)) {
        break;
      } else {
        continue;
      }
    }

    if (!isNG(n - 3) && n - 3 >= 0) {
      n -= 3;
    } else if (!isNG(n - 2) && n - 2 >= 0) {
      n -= 2;
    } else if (!isNG(n - 1) && n - 1 >= 0) {
      n -= 1;
    }

    if (n == 0) {
      ans = "YES";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}