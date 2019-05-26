#include <bits/stdc++.h>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, minNum, maxNum;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int ai;

    cin >> ai;

    if (i == 0)
    {
      minNum = ai;
      maxNum = ai;
    }
    else
    {
      minNum = min(minNum, ai);
      maxNum = max(maxNum, ai);
    }
  }

  cout << maxNum - minNum << endl;

  return 0;
}