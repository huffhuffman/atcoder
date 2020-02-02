#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, a, b;
  cin >> n >> a >> b;

  int ansMax = min(a, b);
  int ansMin = max(0, a + b - n);

  cout << ansMax << " " << ansMin << endl;

  return 0;
}