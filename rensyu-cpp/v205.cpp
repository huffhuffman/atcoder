#include <bits/stdc++.h>
using namespace std;

int completeTime(vector<vector<int>> &children, int i) {
  vector<int> cs = children.at(i);
  
  if(cs.size() == 0) {
    return 0;
  }
  
  int maxTime = 0;
  for (int j = 0; j < cs.size(); j++) {
    int time = completeTime(children, cs.at(j)) + 1;
    maxTime = max(time, maxTime); 
  }

  return maxTime;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> p = {-1};
  for (int i = 1; i < n; i++) {
    int pi;
    cin >> pi;
    p.push_back(pi);
  }

  vector<vector<int>> children(n);
  for (int i = 1; i < n; i++) {
    int parent = p.at(i);
    children.at(parent).push_back(i);
  }

  cout << completeTime(children, 0) << endl;

  return 0;
}