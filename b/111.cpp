#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, ans;

  cin >> n;

  int i = 1;

  while (true)
  {
    ans = i * 111;
    if (n <= ans)
    {
      break;
    }
    i++;
  }

  cout << ans << endl;

  return 0;
}
