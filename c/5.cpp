#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int t, n;
  cin >> t >> n;
  int a[n];
  stack<int> st;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    st.push(a[i]);
  }

  int m;
  cin >> m;
  int b[m];
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  string ans = "yes";

  reverse(b, b + m);
  for (int i = 0; i < m; i++) {
    bool ok = false;
    while(!st.empty()) {
      int ai = st.top();
      st.pop();

      if(ai <= b[i] && b[i] <= ai + t) {
        ok = true;
        break;
      }
    }

    if(!ok) {
      ans = "no";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}