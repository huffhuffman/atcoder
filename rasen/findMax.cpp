#include <bits/stdc++.h>
using namespace std;

int findMax(int a[], int l, int r) {
  int m = (l + r) / 2;

  if (l == r - 1) {
    return a[l];
  } else {
    int u = findMax(a, l, m);
    int v = findMax(a, m, r);
    int x = max(u, v);
    return x;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a[6] = {3, 1, 2, 4, 2, 9};

  int m = findMax(a, 0, 5);

  cout << m << endl;

  return 0;
}