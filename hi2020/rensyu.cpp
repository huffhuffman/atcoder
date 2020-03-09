#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";

constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int A, B, M;
  cin >> A >> B >> M;
  vector<int> a(A), b(B);
  for (int i = 0; i < A; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < B; i++) {
    cin >> b[i];
  }

  vector<int> x(M), y(M), c(M);
  for (int i = 0; i < M; i++) {
    cin >> x[i] >> y[i] >> c[i];
    x[i]--;
    y[i]--;
  }
  
  ll ans = *min_element(all(a)) + *min_element(all(b));

  return 0;
}