#include <iostream>

using namespace std;

int main ()
{
  int n, d, ttime (0), num, ans(0);

  cin >> n >> d;

  for (int i(0); i < n; i++)
  {
    cin >> num;

    if ((ttime + num) > d)
    {
      cout << "-1";
      return 0;
    }

    ttime += num;
    if (ttime + 10 <= d)
    {
      ttime += 10;
      ans += 2;
    }
    else
    {
      if (i != n-1)
      {
        cout << "-1";
        return 0;
      }
    }
  }

  if ((d-ttime) >= 5)
    ans += (d-ttime) / 5;

  cout << ans;
  return 0;
}
