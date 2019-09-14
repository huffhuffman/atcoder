#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> lucas(100, -1);

ll luca(ll num) {
  if (num == 0) {
    return lucas[0] = 2;
  }

  if (num == 1) {
    return lucas[1] = 1;
  }

  if (lucas[num] != -1) {
    return lucas[num];
  }

  return lucas[num] = luca(num - 1) + luca(num - 2);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  cout << luca(n) << endl;

  return 0;
}