#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
vector<int> nums;
set<int> st = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int limitLen;
vector<int> anss;

int dfs(int m, int i) {
  if (i >= limitLen) return m;

  if (m >= n) return m;

  for (auto num : nums) {
    int a = dfs(m * 10 + num, i + 1);
    anss.push_back(a);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  limitLen = to_string(n).length() + 1;

  for (int i = 0; i < k; i++) {
    int di;
    cin >> di;

    st.erase(di);
  }

  for (int num : st) {
    nums.push_back(num);
  }

  dfs(0, 0);

  sort(anss.begin(), anss.end());

  for (auto ans : anss) {
    if (ans >= n) {
      cout << ans << endl;
      break;
    }
  }

  return 0;
}