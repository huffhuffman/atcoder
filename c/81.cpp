#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  vector<int> counter(300000, 0);

  int uniqC = 0;

  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;

    a[i] = ai;

    if (counter.at(ai) == 0) uniqC++;

    counter.at(ai)++;
  }

  sort(counter.begin(), counter.end());

  int ans = 0;

  int req = uniqC - k;
  for (int i = 0; req > 0; i++) {
    ans += counter.at(i);
    if (counter.at(i) != 0) req--;
  }

  cout << ans << endl;

  return 0;
}