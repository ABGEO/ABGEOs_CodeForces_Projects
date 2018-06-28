#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  int k2, k3, k5, k6, m_256, m_32, ans(0);

  cin >> k2 >> k3 >> k5 >> k6;

  m_256 = min (k2, min(k5, k6));

  ans += 256 * m_256;

  k2 -= m_256;

  m_32 = min (k2, k3);

  ans += 32 * m_32;

  cout << ans;
  return 0;
}
