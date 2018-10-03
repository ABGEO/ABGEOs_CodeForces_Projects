#include <iostream>

using namespace std;

int main()
{
  int arr[3005] = {0}, n, ans(0);

  cin >> n;

  for (int i(2); i <= n; i++)
  {
    if (arr[i] == 0)
      for(int j(i); j <= n; j+=i)
        arr[j]++;

    if (arr[i] == 2)
      ans++;
  }

  cout << ans;

  return 0;
}
