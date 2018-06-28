#include <iostream>

using namespace std;

int main ()
{
  int n, a1, a2, a3, b1, b2, b3, a, b, total (0);

  cin >> a1 >> a2 >> a3;
  cin >> b1 >> b2 >> b3;
  cin >> n;

  a = a1 + a2 + a3;
  b = b1 + b2 + b3;

  if (a > 5)
  {
    total += a / 5;
    if (a % 5 != 0)
      total ++;
  }
  else if (a != 0)
    total += 1;

  if (b > 10)
  {
    total += b / 10;
    if (b % 10 != 0)
      total ++;
  }
  else if (b != 0)
    total += 1;

  if (total <= n)
    cout << "YES";
  else
    cout << "NO";

  cout << endl;

  return 0;
}
