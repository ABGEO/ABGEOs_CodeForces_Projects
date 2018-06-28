#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  long long x;
  int n, gr(0);

  cin >> n >> x;

  while (n--)
  {
    char c;
    int d;
    cin >> c >> d;

    if (c == '+')
      x += d;
    else if (c == '-')
    {
      if ((x - d) >= 0)
        x -= d;
      else
        gr++;
    }
  }

  cout << x << " " << gr;

  return 0;
}
