#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int total = accumulate(a.begin(), a.end(), 0);

  int ans = 0;
  if (total % n == 0) {
    int target = total / n;

    int left = 0;
    int right = total;
    for (int i = 0; i < n - 1; i++) {
      left += a[i];
      right -= a[i];

      int lc = i + 1;
      int rc = n - lc;

      int lt = lc * target;
      
      if(left != lt) {
        ans++;
      }
    }

  } else {
    ans = -1;
  }

  cout << ans << endl;

  return 0;
}