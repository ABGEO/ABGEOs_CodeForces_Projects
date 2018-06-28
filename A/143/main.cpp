#include <iostream>

using namespace std;

int arr[100005];

int main()
{
  int k, l, m, n, d;

  cin >> k >> l >> m >> n >> d;

  for (int i(0); i < d; i += k)
    arr[i]++;

  for (int i(0); i < d; i += l)
    arr[i]++;

  for (int i(0); i < d; i += m)
    arr[i]++;

  for (int i(0); i < d; i += n)
    arr[i]++;

  int ans = d;

  for (int i(0); i < d; i++)
    if (arr[i] == 0)
        ans--;

  cout << ans;

  return 0;
}


1
1
1
1
100000
