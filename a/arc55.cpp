#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<char> s(n+1);
  s[0] = '1';
  for (int i = 1; i <= n; i++) {
    s[i]='0';
  }

  for (int i = 0; i < n; i++) {
    cout << s[i];
  }
  cout << 7 << endl;

  return 0;
}