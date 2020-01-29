#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  int ansAdult = -1, ansOld = -1, ansBaby = -1;
  for (int old = 0; old <= 1; old++) {
    for (int adult = 0; adult + old <= n; adult++) {
      int baby = n - (old + adult);

      int f = old * 3 + adult * 2 + baby * 4;
      if (f == m) {
        ansAdult = adult;
        ansOld = old;
        ansBaby = baby;
        break;
      }
    }
  }

  cout << ansAdult << " " << ansOld << " " << ansBaby << endl;

  return 0;
}