#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int A[14] = {1, 1, 2, 2, 2, 4, 5, 5, 6, 8, 8, 8, 10, 15};
  int *pos;
  int idx;

  pos = lower_bound(&A[0], &A[14], 3);
  idx = distance(&A[0], pos);
  cout << "A[" << idx << "] = " << *pos << endl;

  pos = lower_bound(&A[0], &A[14], 2);
  idx = distance(&A[0], pos);
  cout << "A[" << idx << "] = " << *pos << endl; 

  return 0;
}