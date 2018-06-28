#include <iostream>

using namespace std;

int nms[100005];

int main ()
{
  int n, k, d[505], ans(0);

  cin >> n >> k;

  for (int i(0); i < n; i++)
    cin >> d[i];

  for (int i(0); i < n-1; i++)
  {
    int pr = d[i] + d[i+1];

    if (pr < k)
    {
      ans += k-pr;
      d[i+1] += k-pr;
    }
  }

  cout << ans << endl;

  for (int i(0); i < n; i++)
    cout << d[i] << " ";

  return 0;
}
