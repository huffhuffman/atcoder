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

  int n;
  cin >> n;
  vector<int> a(n), b(n);
  int mmin = INF;
  int minI = 0;
  int mmax = 0;
  int maxI = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    if(mmin > b[i]) {
      mmin = b[i];
      minI = a[i];
    }

    if(mmax < b[i]) {
      mmax = b[i];
      maxI = a[i];
    }
  }

  int ans = minI + mmin;

  cout << ans << ln;

  return 0;
}

/*
1 2 3 4 5 6 7 8 9
x 9 x 7 x 2 1 0
*/