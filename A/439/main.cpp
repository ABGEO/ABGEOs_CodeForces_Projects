#include <iostream>

using namespace std;

int main ()
{
  int n;

  cin >> n;

  int d[n+5];

  for (int i(0); i < n; i++)
  {
    cin >> d[i];
  }

  for (int i(0); i < n; i++)
  {
    if (i == 0)
    {
      cout << d[0] + d[1] << d[n-1] - d[0] << endl;
    }
    else if (i == n-1)
    {
      cout << d[n-1] - d[n-2] << d[n-1] - d[0] << endl;
    }
    else
    {
      cout << "X" << endl;
    }
  }

  cout << ans;
  return 0;
}
