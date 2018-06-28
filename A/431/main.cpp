#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int d[5], ans(0);

  for (int i(1); i < 5; i++)
    cin >> d[i];

  string str;

  cin >> str;

  for (int i(0); i < str.length(); i++)
    ans += d[str[i]-48];

  cout << ans;

  return 0;
}
