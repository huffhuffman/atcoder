#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  int num = 0;
  if (n % 2 == 0) {
    num = n / 2;
  } else {
    num = (n + 1) / 2;
  }

  string ans = "YES";
  if (k > num) {
    ans = "NO";
  }

  cout << ans << endl;

  return 0;
}