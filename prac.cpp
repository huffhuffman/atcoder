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

  bitset<5> bits(9);

  cout << bits[0] << endl; // 1
  cout << bits[1] << endl; // 0
  cout << bits[2] << endl; // 0
  cout << bits[3] << endl; // 1
  cout << bits[4] << endl; // 0
  cout << bits[10] << endl; // 0

  return 0;
}