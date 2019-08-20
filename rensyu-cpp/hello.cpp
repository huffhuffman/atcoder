#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a;
  int* p;

  a = 10;

  cout << &a << endl;

  p = &a;

  if (a == *p) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}