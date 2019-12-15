#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  bitset<8> b(5);

  int n;
  cin >> n;

  cout << (7 & (1 << n)) << endl;

  return 0;
}