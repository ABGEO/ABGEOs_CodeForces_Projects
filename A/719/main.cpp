#include <iostream>

using namespace std;

int main ()
{
  int n, d[95];

  cin >> n;

  for (int i(0); i < n; i++)
  {
    cin >> d[i];
  }

  if (d[n-1] == 0)
  {
    cout << "UP";
    return 0;
  }
  else if (d[n-1] == 15)
  {
    cout << "DOWN";
    return 0;
  }
  else if (n == 1)
  {
    cout << "-1";
    return 0;
  }

  if (d[n-1] > d[n-2])
    cout << "UP";
  else if (d[n-1] < d[n-2])
    cout << "DOWN";
  else
    cout << "-1";

  return 0;
}
