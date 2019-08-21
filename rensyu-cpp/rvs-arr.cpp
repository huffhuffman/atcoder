#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> &data, int i) {
  if(data.size() == i) {
    vector<int> empty = {};
    return empty;
  }

  vector<int> rvs = reverse(data, i + 1);
  rvs.push_back(data.at(i));
  return rvs;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> vec = {1, 2, 3, 4, 5};

  vector<int> rvs = reverse(vec, 0);
  for(int i = 0; i < 5; i++) {
    cout << rvs.at(i) << endl;
  }

  return 0;
}