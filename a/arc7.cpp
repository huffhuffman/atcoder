#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  char x;
  cin >> x;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == x) continue;

    cout << s[i];
  }

  cout << ln;

  return 0;
}