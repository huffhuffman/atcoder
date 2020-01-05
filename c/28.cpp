#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  vector<int> v(5);
  for (int i = 0; i < 5; i++) {
    cin >> v[i];
  }

  vector<int> sums;
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      for (int k = j + 1; k < 5; k++) {
        sums.emplace_back(v[i] + v[j] + v[k]);
      }
    }
  }

  sort(sums.rbegin(), sums.rend());

  cout << sums[2] << endl;

  return 0;
}