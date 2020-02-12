#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int test[3][3];

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int test2[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "test: " << test[i][j] << endl;
      cout << "test2: " << test2[i][j] << endl;
    }
  }

  return 0;
}