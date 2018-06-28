#include <iostream>
#include <algorithm>

using namespace std;

pair <int, int> pr[105];

int main ()
{
  int n, m;

  cin >> n >> m;

  int winners[m];

  for (int i(0); i < m; i++)
  {
    int tmps = -1, tmpn, nm;
    for (int j(0); j < n; j++)
    {
      cin >> nm;
      if (nm > tmps)
      {
        tmps = nm;
        tmpn = j;
      }
    }
    winners[i] = tmpn+1;
  }

  for (int i(0); i < m; i++)
  {
    pr[winners[i]].second = -winners[i];
    pr[winners[i]].first++;
  }

  sort (pr, pr+105);
  reverse (pr, pr+105);

  cout << -pr[0].second;

  return 0;
}
