#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> v(200000, 0);
  for (int i = 0; i < n; i++) {
    int num = a[i];
    if (num == 0) {
      v[0]++;
      v[1]++;
    } else {
      v[num]++;
      v[num + 1]++;
      v[num - 1]++;
    }
  }

  sort(v.rbegin(), v.rend());

  cout << v[0] << endl;

  return 0;
}