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

  vector<string> sv(15);
  for (int i = 0; i < 15; i++) {
    cin >> sv[i];
  }

  sort(all(sv));

  cout << sv[6] << ln;

  return 0;
}