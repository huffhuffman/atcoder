#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> ans;

  int t = n;
  while (t % 5 != 0) {
    t++;
  }

  int k = t / 5 % 6 + 1;
  for (int i = 0; i < 6; i++) {
    ans.emplace_back(k);

    k++;
    if (k > 6) {
      k = 1;
    }
  }

  int diff = t - n;
  for (int i = 0; i < diff; i++) {
    swap(ans[5 - i], ans[4 - i]);
  }

  for (int i = 0; i < 6; i++) {
    cout << ans[i];
  }
  cout << endl;

  return 0;
}