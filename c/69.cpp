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

  int tm = 0;
  int fm = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 4 == 0) {
      fm++;
    } else if (a[i] % 2 == 0) {
      tm++;
    }
  }

  if(tm > 0) --tm;

  int h = (n - tm) / 2;

  string ans = "Yes";
  if (fm < h) {
    ans = "No";
  }

  cout << ans << endl;

  return 0;
}