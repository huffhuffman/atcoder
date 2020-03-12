#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

void insertionSort(vector<int>& A, int n) {
  for (int i = 1; i < n; i++) {
    int val = A[i];

    int j = i - 1;  //ソート済みの後ろから
    while (j >= 0) {
      if (A[j] > val) {
        A[j + 1] = A[j];
        j--;
      } else {
        break;
      }
    }
    A[j + 1] = val;
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  insertionSort(a, n);

  for_each(all(a), [](int x) { cout << x << ln; });

  return 0;
}