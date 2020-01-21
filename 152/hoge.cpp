#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  // int a = stoi(to_string(0) + "123");

  int n;
  cin >> n;

  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int ah = to_string(i)[0] - '0';
      int bh = to_string(j)[0] - '0';
      int at = i % 10;
      int bt = j % 10;

      if (ah == bt && bh == at) {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}