#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int rmv(int curr, int count) {
  if (count >= curr) {
    return count - curr;
  } else {
    return count;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  queue<int> q;
  for (int i = 1; i < n; i++) {
    if (a[i - 1] != a[i]) {
      q.push(i - 1);
    }
  }
  q.push(n - 1);

  int ans = 0;
  int cc = 0;
  for (int i = 0; i < n; i++) {
    cc++;

    if (q.front() == i) {
      ans += rmv(a[i], cc);

      cc = 0;
      q.pop();
    }
  }

  cout << ans << endl;

  return 0;
}