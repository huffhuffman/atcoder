#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  set<int> st;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    st.insert(a[i]);
  }

  string ans;
  if (st.size() == a.size()) {
    ans = "YES";
  } else {
    ans = "NO";
  }

  cout << ans << endl;

  return 0;
}