#include <iostream>

using namespace std;

int main()
{
	int a, b, c, ans;

	cin >> a >> b >> c;

  if(a == 1 && c == 1)
		ans = a + b + c;
  else if(a == 1 || (b == 1 && a < c))
		ans = (a + b) * c;
  else if(c == 1 || (b == 1 && a >= c))
		ans = a * (b + c);
  else
		ans = a * b * c;

    cout << ans;

    return 0;
}
