#include <bits/stdc++.h>
using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  deque<long long> a;
  deque<long long> b;
  deque<long long> c;

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    long long anum;
    cin >> anum;
    a.push_back(anum);
  }

  for (int i = 0; i < m; i++)
  {
    long long bnum, cnum;
    cin >> bnum >> cnum;
    b.push_back(bnum);
    c.push_back(cnum);
  }

  for (int i = 0; i < m; i++)
  {

    sort(a.begin(), a.end());
    if (a[0] < c[i])
    {
      for (int j = 0; j < a.size(); j++)
      {
        if (a[j] < c[i] && b[i] > 0)
        {
          a[j] = c[i];
          b[i]--;
        }
      }
    }
  }
  // long long sum = accumulate(a.begin(), a.end(), 0);

  long long sum = 0;

  for (int i = 0; i < a.size(); i++)
  {
    sum += a[i];
  }
  

  cout << sum << endl;

  return 0;
}