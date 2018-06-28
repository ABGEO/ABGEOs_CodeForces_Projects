#include <iostream>

using namespace std;

int main()
{
  int n, d[105], total (0), pn;

  cin >> n;

  for (int i(1); i <= n; i++)
  {
    cin >> d[i];
    total += d[i];
  }

  pn = total * 2 / n;

  for (int i(1); i <= n; i++)
  {
    for (int j(1); j <= n; j++)
    {
      if (i == j)
        continue;

      if ((d[i] + d[j]) == pn)
      {
        d[i] = 0;
        d[j] = 0;

        cout << i << " " << j << endl;
      }
    }
  }

  return 0;
}
