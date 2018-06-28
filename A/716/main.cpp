#include <iostream>

using namespace std;

int main ()
{
  int n, c, ans(1);

  cin >> n >> c;

  int t[n];

  for (int i(0); i < n; i++)
    cin >> t[i];

  for (int i(1); i < n; i++)
  {
    ans++;

    if ((t[i] - t[i-1]) > c)
      ans = 1;
  }

  cout << ans;
  return 0;
}
