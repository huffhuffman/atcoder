#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n), b(n), ca(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    ca[i] = a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  string ans = "Yes";
  for (int i = 0; i < n; i++) {
    if (a[i] > b[i]) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}