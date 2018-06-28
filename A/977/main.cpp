#include <iostream>

using namespace std;

int main ()
{
  int nm, k;
  cin >> nm >> k;

  while(k--)
  {
    if (nm % 10 > 0)
      nm--;
    else
      nm /= 10;
  }

  cout << nm;
  return 0;
}
