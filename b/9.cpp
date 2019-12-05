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
  set<int> s;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    if (s.find(num) == s.end()) {
      s.insert(num);
      a[i] = num;
    }
  }

  sort(a.rbegin(), a.rend());
  cout << a[1] << endl;

  return 0;
}