#include <bits/stdc++.h>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  int nTmp;
  int sum = 0;

  cin >> n;

  nTmp = n;

  while (true)
  {
    if (nTmp <= 0)
    {
      break;
    }

    sum += n % 10;

    nTmp = nTmp / 10;
  }

  puts(n % sum == 0 ? "Yes" : "No");

  return 0;
}