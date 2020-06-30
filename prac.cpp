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

  set<string> s;
  for (int i = 1; i < 1001; i++) {
    string num = to_string(i);
    s.insert(num);
  }

  for (auto num : s) {
    cout << num << ln;
  }

  return 0;
}