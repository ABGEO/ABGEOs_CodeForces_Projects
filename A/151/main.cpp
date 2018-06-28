#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, k, l, c, d, p, nl, np, klnl, cd, pnp;

  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  klnl = k * l / nl;
  cd = c * d;
  pnp = p / np;

  cout << min (klnl, min (cd, pnp)) / n;

  return 0;
}
