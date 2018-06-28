#include <iostream>

using namespace std;

int main ()
{
  int n, nmin(1000000000), nmax(0), ans1, n1(0), n2(0);

  cin >> n;

  int b[n+5];

  for (int i(0); i < n; i++)
  {
    cin >> b[i];

    if (b[i] > nmax)
      nmax = b[i];

      if (b[i] < nmin)
        nmin = b[i];
  }

  ans1 = nmax - nmin;

  for (int i(0); i < n; i++)
  {
    if (b[i] == nmax)
      n1++;

    if (b[i] == nmin)
      n2++;
  }

  cout << ans1 << " " << n1 + n2;
  return 0;
}
