#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N = 4;
  vector<int> v;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  print(v);

  vector<int>::iterator it = v.begin();
  *it = 3;
  it++;
  it + 5;
  *it = 213;

  print(v);

  return 0;
}