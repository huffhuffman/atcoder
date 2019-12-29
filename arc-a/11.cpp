#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int m, n, N;
  cin >> m >> n >> N;

  int curr = N;

  int ans = curr;

  while (1) {
    int newP = (curr / m) * n;
    int mod = curr % m;

    curr = newP;

    if(curr <= 0) {
      break;
    }

    ans += curr;

    curr += mod;
  }

  cout << ans << endl;

  return 0;
}